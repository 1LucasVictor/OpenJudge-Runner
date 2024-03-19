#include <stdio.h>

int fib(int);


int main() {
    
    int n;
    
    scanf("%d",&n);
    
    printf("%d\n",fib(n));
    
    return 0;
}


int fib(int x) {
    if(x==0 || x==1) return 1;
    else return fib(x-1)+fib(x-2);
}