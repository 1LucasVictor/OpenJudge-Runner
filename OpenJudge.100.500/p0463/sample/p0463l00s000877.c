#include<stdio.h>
int main(void)
{
	int N,a;
	scanf("%d",&N);
	a=N%10;
	if(a==2||a==4||a==5||a==7||a==9){
		printf("hon\n");
	}
	if(a==0||a==1||a==6||a==8){
		printf("pon\n");
	}
	if(a==3){
		printf("bon\n");
	}
	return 0;
}
	
	