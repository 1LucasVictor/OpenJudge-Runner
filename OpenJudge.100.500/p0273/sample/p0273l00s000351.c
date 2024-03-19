#include <stdio.h>
#define N 44

int F[N];

int fibonacci(int);

int main()
{
	int a;

	F[0] = 1;
	F[1] = 1;

	scanf("%d",&a);

	printf("%d\n",fibonacci(a));

	return 0;
}

int fibonacci(int n)
{
	if(n == 0 || n == 1)return F[n] = 1;

	return F[n] = fibonacci(n-2) + fibonacci(n-1);
}