#include <stdio.h>

int prime[1000000];

int main(void)
{
    int n;
    int cnt;
    int i, j;

    prime[2] = 1;
    for (i = 3; i < 1000000; i += 2){
        prime[i] = 1;
    }

    for (i = 3; i * i < 1000000; i += 2){
        if (prime[i] == 0){
            continue;
        }
        for (j = i * i; j < 1000000; j += i){
            prime[j] = 0;
        }
    }

    while (scanf("%d", &n) == 1){
        cnt = 0;
        for (i = 2; i <= n; i++){
            cnt += prime[i];
        }
        printf("%d\n", cnt);
    }

    return (0);
}