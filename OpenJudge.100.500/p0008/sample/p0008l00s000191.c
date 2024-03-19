#include <stdio.h>

int prime[200000];

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF){
        int cnt;
        int i, j;

        if (cnt < 2){
            puts("0");
            continue;
        }

        prime[0] = 2;
        cnt = 1;
        for (i = 3; i <= n; i += 2){
            for (j = 0; j < cnt && prime[j] * prime[j] <= i; ++j){
                if (i % prime[j] == 0){
                    break;
                }
            }
            if (j == cnt || prime[j] * prime[j] > i){
                prime[cnt] = i;
                ++cnt;
            }
        }
        printf("%d\n", cnt);
    }

    return (0);
}