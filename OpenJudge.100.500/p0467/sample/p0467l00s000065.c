#include <stdio.h>
#include <string.h>

int main(){

	long  A,B,C,K;
	scanf("%ld%ld%ld%ld",&A,&B,&C,&K);

	if(A+B>K){
		if(A<=K)printf("%ld\n",A);
		else printf("%ld\n",K);
	}
	else {
		printf("%ld\n",A+(A+B-K));
	}
		
	return 0;
}
