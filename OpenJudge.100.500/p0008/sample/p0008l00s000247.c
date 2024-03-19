#include <stdio.h>
#include <stdbool.h>

#define MAX 1000000

int main(void)
{
    int i, j;

    bool isPrime[MAX];
    isPrime[0] = isPrime[1] = false;
    for (i = 2; i < MAX; i++) {
        isPrime[i] = true;
    }

    for (i = 2; i <= MAX; i++) {
        if (isPrime[i] == true) {
            for (j = i + i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int n;
    int cnt;
    while (scanf("%d", &n) != EOF) {
        cnt = 0;
        for (i = 2; i <= n; i++) {
            if (isPrime[i] == true) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }

    return 0;

}