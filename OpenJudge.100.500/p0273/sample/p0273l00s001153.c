#include<stdio.h>
int memo[45]={};


int fibo(int n){
    if(n==0 || n==1) return memo[n]=1;
    
    else if(memo[n]!=0)
    {
        return memo[n];
    }
    return memo[n]=fibo(n-2)+fibo(n-1);
}



int main(){

    int n;
    scanf("%d",&n);
    printf("%d\n",fibo(n));

    
}
