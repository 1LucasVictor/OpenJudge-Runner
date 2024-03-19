#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int main(void){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	n=n%k;
	if(n>abs(n-k)){
		n=abs(n-k);
	}
	printf("%lld\n",n);
	return 0;
}