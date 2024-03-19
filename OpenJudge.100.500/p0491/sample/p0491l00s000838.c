#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	int n,k;

	scanf("%d %d\n",&n,&k);
	if(n%k==0){
		printf("0");
	}else{
		if(n>k/2){
			n=n%k;
		}
		if(n>k/2){
			n=k-n;
		}
		printf("%d",n);
	}
	return 0;
}
