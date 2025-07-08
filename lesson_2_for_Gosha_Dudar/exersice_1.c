#include <stdio.h>

int main() {
    int arr[] = {5, 7, 2, 56, 34};
    arr[0] = 56;

    printf("%d \n", arr[0]);

    float numbers[3];
    numbers[0] = 5.4f;
    // numbers[1] = 4.23f;
    numbers[2] = 62.12f;

    char word[] = {'S', 'o', 'm', 'e'};
    char words[] = "Some";

    words[1] = 'G';
    printf("%s\n", words); // Використовуємо %s для виведення рядка
    printf("%c\n", words[1]); // Використоввуємо %с для виведення одного символу

    int array[3][4] = {
        {4, 5, 6, 21},
        {7, 234, 4, 291},
        {2, 9, 29, 790}
    };

    array[1][1] = 96;
    printf("%d\n", array[0][1]);

    return 0;
}