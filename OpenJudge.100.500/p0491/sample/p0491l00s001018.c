#include <stdio.h>

int main(void){
	unsigned long n,k;
	scanf("%lu %lu",&n,&k);
	n%=k;
	if(labs(n-k)<n)
		printf("%lu",labs(n-k));
	else
		printf("%lu",n);
	return 0;	
}