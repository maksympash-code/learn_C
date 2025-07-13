#include <stdio.h>

int main() {
    int arr[] = {5, 67, -1, -20, 6};

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }


    printf("\n");
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", min);
    printf("%d\n", max);


    int i = 0;
    while (i < 5) {
        printf("%d ", arr[i]);
        i += 1;
    }

    return 0;
}