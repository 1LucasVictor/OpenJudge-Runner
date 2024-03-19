#include <stdio.h>

int isprime(unsigned long n)
{
	unsigned long i;

	if(n < 2){
		return 0;
	}else if(n == 2){
		return 1;
	}else if(n%2){
		for(i=3; i*i<=n; i+=2){
			if(n%i == 0){ return 0; }
		}
		return 1;
	}

	return 0;
}


int main(void)
{
	unsigned long i, j, n, cnt=0;

	while(scanf("%ld", &n) != EOF){
		cnt = 0;
		for(i=1; i<=n; i++){
			cnt += isprime(i);
		}
		printf("%ld\n", cnt);
	}
    return 0;
}