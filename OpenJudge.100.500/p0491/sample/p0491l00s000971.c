#include <stdio.h>
#include <stdlib.h>

long long int main(void){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	n=n%k;
	if(n>abs(n-k)){
		//n=k-n;
		n=llabs(n-k);
	}
	printf("%lld\n",n);
	return 0;
}
