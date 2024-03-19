#include<stdio.h>

int main(void){

	int a,b = 0;

	scanf("%d %d",&a,&b);

	if((a > 0 && a <=9) && (b > 0 && b <=9)){

	printf("%d",a*b);

	}else{

	printf("%d",-1);
	}


	return 0;
}
