#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
	unsigned long  i,j,X;
	scanf("%lu",&X);

	i=X/500;
	X-=(500*i);
	j=X/5;
	X-=(5*j);
	X=i*1000+j*5;
	printf("%lu",X);

	return 0;
}