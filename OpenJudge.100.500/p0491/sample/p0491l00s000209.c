#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int main(void){
	long long int n,k;
	long long int nm;
	scanf("%lld %lld",&n,&k);
	if(n>=k){
		n=n%k;
	}
	while(n>abs(n-k)){
		n=abs(n-k);
	}
	printf("%lld\n",n);
	return 0;
}