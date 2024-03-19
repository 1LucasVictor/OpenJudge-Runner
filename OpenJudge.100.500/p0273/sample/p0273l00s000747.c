#include<stdio.h>
#define SIZE 45
int F[SIZE];


int fib(int n) {
    if (n == 0 || n == 1) return F[n] = 1;
    if (F[n] != 0) return F[n];
    else return F[n] = fib(n-1)+fib(n-2);
}

int main() {
    int i,n;
    for (i=0; i<SIZE; i++) {
	F[i] = 0;
    }
    scanf("%d",&n);
    printf("%d", fib(n));
}