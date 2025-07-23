#include <stdio.h>

int main(){

    int num = 0;
    int *pointerNum = &num;
    printf("%p - %p\n", pointerNum, &num);

    *pointerNum = 10;
    printf("%d - %d\n", *pointerNum, num);

    return 0;
}