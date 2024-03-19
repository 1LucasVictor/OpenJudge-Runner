#include<stdio.h>

int fib(int);

int a[44];

main(){
int n,i;

for(i=0;i<44;i++)a[i]=-1;

scanf("%d",&n);
printf("%d\n",fib(n));

return 0;
}

int fib(int n){
if(n==0||n==1)return a[n]=1;
if(a[n]!=-1)return a[n];
return a[n]=fib(n-1)+fib(n-2);
}