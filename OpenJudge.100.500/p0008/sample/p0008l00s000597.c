#include <stdio.h>

/* prototype declaration */
void init();
int isPrime(int n);
int primeCounter(int n);

int flag[1000000];

/* main */
int main(int argc, const char *argv[])
{
	int n;
	init();
	while(scanf("%d",&n)!=EOF)
		printf("%d\n", primeCounter(n));	
	return 0;
}

void init()
{
	int i;
	flag[2] = 1;
	for(i=3; i<1000000; i+=2)
		if(isPrime(i)) flag[i] = 1;
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
		if(flag[i]) cnt++;
	return cnt;
}