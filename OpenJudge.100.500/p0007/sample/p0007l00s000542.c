#include <stdio.h>

int main(void)
{
    int n;
    int i, j, k, l;
    int cnt;
    int tmp;

    while (scanf("%d", &n) != EOF){
        cnt = 0;

        for (i = 0; i < 10; i++){
            for (j = 0; j < 10; j++){
                for (k = 0; k < 10; k++){
                    tmp = n - i - j - k;
                    if (0 <= tmp && tmp < 10){
                        cnt++;
                    }
                }
            }
        }

        printf("%d\n", cnt);
    }

    return (0);
}