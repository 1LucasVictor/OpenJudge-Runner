#include<stdio.h>

int fib(int n){
    if( n==0 || n==1) return 1;
    n = fib(n-1)+fib(n-2);
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    n = fib(n);
    printf("%d\n",n);
    return 0; 
}

