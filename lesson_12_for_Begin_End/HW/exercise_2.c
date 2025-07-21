#include <stdio.h>
#include <string.h>

struct Thing {
    float length, height, width;
    char name[50];
    char color[250];
} thing;

// int main() {
//
//     struct Thing t[3];
//
//     t[0].length = 9.7f;
//     t[0].height = 4.5f;
//     t[0].width = 2.7f;
//
//     strcpy(t[0].name, "pencil case");
//     strcpy(t[0].color, "blue");
//
//     t[1].length = 3.0f;
//     t[1].height = 2.2f;
//     t[1].width = 1.4f;
//
//     strcpy(t[1].name, "pen");
//     strcpy(t[1].color, "black");
//
//     t[2].length = 4.4f;
//     t[2].height = 12.1f;
//     t[2].width = 3.8f;
//
//     strcpy(t[2].name, "a cap of tea");
//     strcpy(t[2].color, "brown");
//
//
//     for (int i = 0; i < 3; i++) {
//         printf("%.2f %.2f %.2f\n%s\n%s\n", t[i].length, t[i].height, t[i].width, t[i].name, t[i].color);
//     }
//
//     return 0;
// }