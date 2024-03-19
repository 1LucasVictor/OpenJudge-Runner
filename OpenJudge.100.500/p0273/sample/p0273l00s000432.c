#include <stdio.h>
int a[50];

int fib(int n){
    if(n==0 || n==1)return a[n]=1;
    if(a[n]!=-1)return a[n];
    return a[n]=fib(n-1)+fib(n-2);
}

int main(){
    int i,j;
    for(i=0;i<50;i++)a[i]=-1;
    scanf("%d",&j);
    printf("%d\n",fib(j));
    return 0;
}
