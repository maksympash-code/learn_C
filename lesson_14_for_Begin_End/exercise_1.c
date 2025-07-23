#define _USE_MATH_DEFINES
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <tgmath.h>
#include <math.h>
#include <stdbool.h>

#define width 65
#define height 25

void moveBall(float x, float y);

typedef struct {
    int x, y;
    int w;
} TRacket;

typedef struct {
    float x, y;
    int ix, iy;
    float alpha;
    float speed;
} TBall;

char mas[height][width + 1];
TRacket racket;
TBall ball;
int hitCnt = 0;
int maxHitCnt = 0;

void initRacket() {
    racket.w = 7;
    racket.x = (width - racket.w) / 2;
    racket.y = height - 1;
}

void initBall() {
    moveBall(2, 2);
    ball.alpha = -1;
    ball.speed = 0.5f;
}

void PutBall() {
    mas[ball.iy][ball.ix] = '*';
}

void moveBall(float x, float y) {
    ball.x = x;
    ball.y = y;
    ball.ix = (int) round(ball.x);
    ball.iy = (int) round(ball.y);
}

void autoMoveBall() {
    double pi = M_PI;

    if (ball.alpha < 0) 
        ball.alpha +=  pi * 2;
    if (ball.alpha > pi * 2)
        ball.alpha -= pi * 2;

    TBall bl = ball;
    moveBall(ball.x + cos(ball.alpha) * ball.speed,
        ball.y + sin(ball.alpha) * ball.speed);

    if ((mas[ball.iy][ball.ix] == '#') || mas[ball.iy][ball.ix] == '@'){

        if (mas[ball.iy][ball.ix] == '@')
            hitCnt += 1;

        if ((ball.ix != bl.ix) && (ball.iy != bl.iy)){
            if (mas[bl.iy][ball.ix] == mas[ball.iy][bl.ix])
                bl.alpha = bl.alpha + pi;
            else{
                if (mas[bl.iy][ball.ix] == '#')
                    bl.alpha = (2 * pi - bl.alpha) + pi;
                else
                    bl.alpha = (2 * pi - bl.alpha);
            }
        }
        else if (ball.iy == bl.iy)
            bl.alpha = (2 * pi - bl.alpha) + pi;
        else
            bl.alpha = (2 * pi - bl.alpha);
        
        ball = bl;
        autoMoveBall();
    }
}

void PutRacket() {
    for (int i = racket.x; i < racket.x + racket.w; i++) {
        mas[racket.y][i] = '@';
    }
}

void init() {
    for (int i = 0; i < width; i++) {
            mas[0][i] = '#';
        }
    mas[0][width] = '\0';

    strncpy(mas[1], mas[0], width + 1);
    for (int i = 1; i < width - 1; i++)
        mas[1][i] = ' ';

    for (int i = 2; i < height; i++) {
        strncpy(mas[i], mas[1], width + 1);
    }
}


void show() {
    for (int i = 0; i < height; i++) {
        printf("%s", mas[i]);
        if (i == 3)
            printf("    hit %i  ", hitCnt);
        if (i == 4)
            printf("    max %i  ", maxHitCnt);
        if (i < height - 1)
            printf("\n");
    }
}

void moveRacket(int x) {
    racket.x = x;
    if (racket.x < 1)
        racket.x = 1;
    if (racket.x + racket.w >= width)
        racket.x = width - 1 - racket.w;
}


void setCur(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main() {

    char c;
    bool run = false;
    initRacket();
    initBall();

    do {
        setCur(0, 0);

        if (run)
            autoMoveBall();
        if (ball.iy > height){
            run = false;
            if (hitCnt > maxHitCnt)
                maxHitCnt = hitCnt;
            hitCnt = 0;
        }

        init();

        PutRacket();
        PutBall();
        show();


        if (GetKeyState('A') < 0)
            moveRacket(racket.x - 1);
        if (GetKeyState('D') < 0)
            moveRacket(racket.x + 1);
        if (GetKeyState('W') < 0)
            run = true;
        if (!run)
            moveBall(racket.x + racket.w / 2, racket.y - 1);
        Sleep(10);
    } while (GetKeyState(VK_ESCAPE) >= 0);

    return 0;
}