#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n<2) return 0;
    if (n==2) return 1;
    if (n%2==0) return 0;
    for (i=3; i<=n/i; i+=2) {
        if (n%i==0) return 0;
    }
    return 1;
}

int main(void) {
    int n, cnt;

    while (scanf("%d", &n) != EOF) {
        cnt=0;
        while (n>1) {
            if (isPrime(n)==1) cnt++;
            if (n!=3 && n%2==1) n-=2;
            else n--;
        }
        printf("%d\n", cnt);
    }

    return 0;
}

