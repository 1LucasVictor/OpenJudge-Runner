#include <stdio.h>
const int MAX = 100000;

int main() {
    int n, i, k;
    int prime[MAX+1] = {0};
    int sum[MAX+2] = {0};
    for(i = 2; i <= MAX; i++) {
        prime[i] = 1;
    }
    for(i = 2; i <= MAX; i++) {
        if(prime[i]) {
            for(k = 2*i; k <= MAX; k+=i) {
                prime[k] = 0;
            }
        }
    }
    for(i = 0; i < MAX+1; i++) sum[i+1] = sum[i] + prime[i];
    while(scanf("%d", &n) != EOF) {
        printf("%d\n", sum[n+1]);
    }
    return 0;
}