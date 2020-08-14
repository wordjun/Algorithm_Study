#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf_s("%d %d", &a, &b);
    for (int i = 0; i < b; i++) {//세로
        for (int j = 0; j < a; j++) {//가로
            printf("*");
        }
        printf("\n");
    }
    return 0;
}