#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    for (int i = 1; i <= X; i++) {
        if (Y == 2 * i + (X - i) * 4) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");

    return 0;
}
