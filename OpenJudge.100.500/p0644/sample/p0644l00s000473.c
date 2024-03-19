#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	if(a==000){
		printf("0\n");
	}
	else if(a==001 || a==010 || a==100){
		printf("1\n");
	}
	else if(a==011 || a==110 || a==101){
		printf("2\n");
	}
	else if(a==111){
		printf("3\n");
	}
	return 0;
}