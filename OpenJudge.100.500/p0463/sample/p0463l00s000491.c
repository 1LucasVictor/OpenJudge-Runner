#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	if(n>100){
		n%=100;
		n%=10;
	}
	else if(n>10){
		n%=10;
	}
	if(n==3){
		printf("bon\n");
	}
	else if(n==0||n==1||n==6||n==8){
		printf("pon\n");
	}
	else{
		printf("hon\n");
	}
	return 0;
}