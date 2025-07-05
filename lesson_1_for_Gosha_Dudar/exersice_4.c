
#include "exersice_4.h"
#include <stdio.h>

int main() {
    // const short a = 0;
    float a, b, c;
    scanf("%f %f", &a, &b);

    c = a / b;

    printf("Result: %.2f \n", c);

    double x = 5.5f, y = 6.67f, res;

    res = x / y;
    printf("Result: %.2f \n", res);

    // long int
    // printf - Ld

    // int, short
    // printf - d

    char s = 'S';
    printf("%c", s);
    return 0;
}