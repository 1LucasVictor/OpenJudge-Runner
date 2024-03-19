#include <stdio.h>

int prime[2000000];

int main(void)
{
    int n;
    int i, j;
    int cnt;
    int prime_max = 3;

    prime[2] = 1;
    prime[3] = prime[4] = 2;
    while (~scanf("%d", &n)){
        if (n < 2){
            puts("0");
        }
        else if (prime[n] != 0){
            printf("%d\n", prime[n]);
        }
        else {
            for (i = prime_max + 2; i <= n; i += 2){
                prime[i] = prime[i - 1];
                prime[i + 1] = prime[i - 1];
                for (j = 3; j * j <= i; j += 2){
                    if (i % j == 0){
                        break;
                    }
                }
                if (j * j > i){
                    prime[i]++;
                    prime[i + 1]++;
                }
            }
            printf("%d\n", prime[n]);
            prime_max = n - (n + 1) % 2;
        }
    }

    return (0);
}