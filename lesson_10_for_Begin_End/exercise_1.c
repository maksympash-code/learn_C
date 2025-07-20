#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// int main() {
//     char location[10][21];
//     int x = 10, y = 5;
//     char key;
//     int ox, oy;
//     int ax = 5, ay = 3;
//     int count = 0;
//
//     srand(time(NULL));
//
//
//     do {
//         sprintf(location[0], "###################");
//         for (int i = 1; i < 9; i++)
//             sprintf(location[i], "#                 #");
//         sprintf(location[9], "###################");
//
//
//         location[y][x] = '@';
//         location[ay][ax] = '*';
//
//         system("cls");
//         printf("count = %d\n", count);
//         for (int i = 0; i < 10; i++) {
//             printf("%s\n", location[i]);
//         }
//
//         key = getch();
//
//         ox = x;
//         oy = y;
//         if (key == 'w')
//             y--;
//         if (key == 's')
//             y++;
//         if (key == 'a')
//             x--;
//         if (key == 'd')
//             x++;
//         if (location[y][x] == '#') {
//             x = ox;
//             y = oy;
//         }
//
//         if ((x == ax) && (y == ay)) {
//             count++;
//             ax = rand() * 1.0f / RAND_MAX * 17 + 1;
//             ay = rand() * 1.0f / RAND_MAX * 7 + 1;
//         }
//     }   while (key != 'e');
//
//     return 0;
// }
