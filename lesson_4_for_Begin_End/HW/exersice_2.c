#include <stdio.h>

int main() {
    float x, y;
    int i;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter y: ");
    scanf("%f", &y);

    printf("operation: \n1 = * \n2 = + \n3 = - \n4 = / \nselect code:");
    scanf("%d", &i);

    if (i == 1) {
        printf("%.2f * %.2f = %f", x, y, x * y);
    }
    if (i == 2) {
        printf("%.2f + %.2f = %f", x, y, x + y);
    }
    if (i == 3) {
        printf("%.2f - %.2f = %.2f", x, y, x - y);
    }
    if (i == 4) {
        printf("%.2f / %.2f = %.2f", x, y, x / y);
    }


    return 0;
}