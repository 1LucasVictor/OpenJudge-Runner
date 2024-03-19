#include <stdio.h>
int prime[100001];

void isprime(int n) {
    int i, k, l = 0;
    for(i = 2; i <= n; i++) {
        prime[i] = 1;
    }
    for(i = 2; i <= n; i++) {
        if(prime[i]) {
            for(k = 2*i; k <= n; k+=i) {
                prime[k] = 0;
            }
        }
        if(prime[i]) l++;
    }
    printf("%d\n", l);
}

int main() {
    int n, i = 0;
    while(i < 30) {
        if(scanf("%d", &n) == EOF) break;
        isprime(n);
        i++;
    }
    return 0;
}