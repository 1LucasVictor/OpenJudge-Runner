#include<stdio.h>
int main(void)
{
	int s;
	scanf("%d",&s);
	if(s==111){
		printf("3\n");
	}
	else if(s==110){
		printf("2\n");
	}
	else if(s==101){
		printf("2\n");
	}
	else if(s==011){
		printf("2\n");
	}
	else if(s==100){
		printf("1\n");
	}
	else if(s==010){
		printf("1\n");
	}
	else if(s==001){
		printf("1\n");
	}
	else if(s==0){
		printf("0\n");
	}
	return 0;
}