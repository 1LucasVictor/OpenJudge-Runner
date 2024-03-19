#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

int main(void){
	int n;

	scanf("%d",&n);
	n=n%10;
	if(n==2||n==4||n==5||n==7||n==9){
		printf("hon");
	}else if(n==0||n==1||n==6||n==8){
		printf("pon");
	}else{
		printf("bon");
	}
	return 0;
}
