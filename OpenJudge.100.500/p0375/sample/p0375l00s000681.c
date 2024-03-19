#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf(" %d", i);
        }
        else {
            j = i;
            while (j > 0) {
                if (j % 10 == 3) {
                    printf(" %d", i);
                    break;
                }
                j = j / 10;
            }
        }
    }
    printf("\n");
    return 0;
}