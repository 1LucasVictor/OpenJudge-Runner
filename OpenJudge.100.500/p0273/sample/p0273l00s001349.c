#include<stdio.h>

int fib(int);

int F[50];

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)F[i]=-1;
	printf("%d\n",fib(n));
}

int fib(int n)
{
	if(n==0||n==1) return F[n]=1;
	
    else 
    
    if(F[n]!=-1) return F[n];
    else return F[n]=fib(n-2)+fib(n-1);
}

