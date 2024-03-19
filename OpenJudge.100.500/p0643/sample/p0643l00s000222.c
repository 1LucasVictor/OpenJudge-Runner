#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a%2==1){
		if(b%2==1){
			printf("Odd");
			return 0;
		}else{
			printf("Even");
			return 0;
		}
	}
	printf("Even");

	return 0;
}
