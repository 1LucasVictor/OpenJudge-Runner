#include <stdio.h>

/* prototype declaration */
int isPrime(int n);
int primeCounter(int n);

/* main */
int main(int argc, const char *argv[])
{
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%d\n", primeCounter(n));	
	return 0;
}

int isPrime(int n)
{
	int i;
	if(n <= 1) return 0;
	else if(n == 2) return 1;
	else if(n%2 == 0) return 0;
	else{
		for(i=3;i*i<=n;i+=2)
			if(n%i == 0) return 0;
	}
	return 1;
}

int primeCounter(int n)
{
	int i, cnt = 0;
	for(i=1; i<=n; i++)
		if(isPrime(i)) cnt++;
	return cnt;
}