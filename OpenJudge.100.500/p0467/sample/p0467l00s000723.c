#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{
	long long int A=0,B=0,C=0,K=0;
	
	scanf("%lld %lld %lld %lld",&A,&B,&C,&K);
	
	
	
	
	
	
	if(A<=K&&K<=A+B){
		printf("%lld",A);
	}
	else if(K<A){
		printf("%lld",K);
	}
	else{
		printf("%lld",A-(K-A-B));
	}
	
	return 0;
}
