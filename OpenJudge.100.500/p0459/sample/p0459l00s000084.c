#include <stdio.h>

int main(void) {
    int X, Y;

    scanf("%d %d", &X, &Y);

    for (int i = 0; i <= X; i++) {
        if (Y == 4 * X - 2 * i) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");

    return 0;
}