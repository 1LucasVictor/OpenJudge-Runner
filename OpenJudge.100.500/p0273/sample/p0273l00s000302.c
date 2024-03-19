#include <stdio.h>
#define M 44

int memo[M];

int fib(int n){
    if(memo[n]!=0) return memo[n];
    if(n==0 || n==1) return memo[n]=1;
    else return memo[n]=fib(n-2)+fib(n-1);
}

int main(void){
    int n;
    for(int i=0;i<M;i++) memo[i]=0;
    scanf("%d",&n);
    printf("%d\n",fib(n));
}

