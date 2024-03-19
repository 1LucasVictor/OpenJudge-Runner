#include<stdio.h>
#define SIZE 45
int F[SIZE];

//memo
int fib(int n) {
    if (n == 0 || n == 1) return F[n] = 1;
    if (F[n] != 0) return F[n];
    else return F[n] = fib(n-1)+fib(n-2);
}

//dynamic
int fibo(int n) {
    int i;
    F[0] = F[1] = 1;
    for (i=2; i<SIZE; i++) F[i] = F[i-1] + F[i-2];
    return F[n];
}


int main() {
    int i,n;
    for (i=0; i<SIZE; i++) {
	F[i] = 0;
    }
    scanf("%d",&n);
    printf("%d", fib(n));
}