#include<stdio.h>
int f[44];
int fib(int n){
    if( n==0 || n==1) return f[n] = 1;
    if(f[n]!=NULL) return f[n];
    return f[n] = fib(n-1)+fib(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    n = fib(n);
    printf("%d\n",n);
    return 0; 
}

