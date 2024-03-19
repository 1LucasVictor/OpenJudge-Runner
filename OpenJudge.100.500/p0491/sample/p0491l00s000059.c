#include <stdio.h>
#include <stdlib.h>

int main(void){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	if(n>k){
		n=n%k;
	}
	while(n>abs(n-k)){
		n=abs(n-k);
	}
	printf("%lld\n",n);
	return 0;
}
