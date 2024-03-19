#include<stdio.h>

#define FIB_MAX 44

int fibbuf[FIB_MAX+1];
int fib_n;

void init()
{
	fibbuf[0] = fibbuf[1] = 1;
	fib_n = 2;
	return;
}

int fib(int n)
{
	if(n < fib_n){
		return(fibbuf[n]);
	}
	fibbuf[fib_n] = fib(n - 1) + fib(n - 2);
	return(fibbuf[fib_n++]);
}

int main()
{
	int n;

	init();
	scanf("%d", &n);
	printf("%d\n", fib(n));

	return(0);
}