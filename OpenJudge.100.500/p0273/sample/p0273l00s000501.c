#include <stdio.h>

int fib(int);

int a[50]={0};

int main(void)
{
	int n;
	
	scanf("%d",&n);
	
	printf("%d\n",fib(n));
	
	return 0;
}

int fib(int n)
{
	a[1]=a[0]=1;
	if(a[n]!=0) return a[n];
	a[n] = fib(n-1) + fib(n-2);
	return a[n];
}