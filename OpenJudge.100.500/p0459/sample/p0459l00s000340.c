#include <stdio.h>

int main(void)
{
    int x, y;
    int i, j;
    int ans = 0;
    scanf("%d %d", &x, &y);
    for (i = 0; i <= x; i++) {
        j = i * 2 + (x - i) * 4;
        if (j == y) {
            ans = 1;
            break;
        }
    }
    printf("%s\n", (ans == 1) ? "Yes" : "No");
    return 0;
}