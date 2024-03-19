#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	long long int n,k;
	long long int nm;
	scanf("%lld %lld",&n,&k);
	if(n>k){
		n=n%k;
	}
  	nm=n;
	for(int i=0; i<100000; i++){
		n=abs(n-k);
		nm=fmin(nm,n);
	}
	printf("%lld\n",nm);
	return 0;
}