#include <stdio.h>
int main(void){static char prime[1000001];int i, j;int n;for (i = 3; i <= 1000000; i += 2){prime[i] = 1;}prime[2] = 1;for (i = 3; i <= 1000; i += 2){if (prime[i] == 1){for (j = 3; j <= 1000000 / i; j += 2){prime[i * j] = 0;}}}while (scanf("%d", &n) != EOF){j = 0;for (i = 2; i <= n; i++){if (prime[i] == 1){j++;}}printf("%d\n", j);}return (0);}