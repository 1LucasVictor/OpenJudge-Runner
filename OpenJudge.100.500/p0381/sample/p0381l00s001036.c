#include <stdio.h>

int main(void)
{

    int n, x, i, k, j;
    int count;

    while (1){
        scanf("%d %d", &n, &x);

        count = 0;

        if (n == 0 && x == 0) break;

        for (i = 1; i <= n; i++){
            for (k = i + 1; k <= n; k++){
                for (j = k + 1; j <= n; j++){
                    if (i + k + j  == x){
                        count++;
                    }
                }
            }
        }

        printf("%d\n", count);
    }

    return (0);
}

