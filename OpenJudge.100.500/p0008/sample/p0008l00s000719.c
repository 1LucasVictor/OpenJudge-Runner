#include <stdio.h>
int main() {
    int n, i, k;
    int prime[100001] = {0};
    int sum[100002] = {0};
    for(i = 2; i <= 100000; i++) {
        prime[i] = 1;
    }
    for(i = 2; i <= 100000; i++) {
        if(prime[i]) {
            for(k = 2*i; k <= 100000; k+=i) {
                prime[k] = 0;
            }
        }
    }
    for(i = 0; i < 100001; i++) {
        sum[i+1] = sum[i] + prime[i];
    }
    while(scanf("%d", &n) != EOF) {
        printf("%d\n", sum[n+1]);
    }
    return 0;
}