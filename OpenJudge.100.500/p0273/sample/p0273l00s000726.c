#include <stdio.h>

int fib(int n)
{
	int kekka;
	
	if (n == 0){
		return (1);
	}
	else if (n == 1){
		return (1);
	}
	
	kekka = fib(n - 1) + fib(n - 2);
	
	return (kekka);
}
int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", fib(n));
	
	return (0);
}