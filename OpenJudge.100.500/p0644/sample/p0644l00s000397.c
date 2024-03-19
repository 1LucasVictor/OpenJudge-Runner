#include<stdio.h>
int main(void)
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x%100;
	b=x%10;
	c=x%1;
	if(a==1 && b==1 && c==1){
		printf("3\n");
	}
	else if(a==1 && b==1 && c==0){
		printf("2\n");
	}
	else if(a==1 && b==0 && c==1){
		printf("2\n");
	}
	else if(a==0 && b==1 && c==1){
		printf("2\n");
	}
	else if(a==1 && b==0 && c==0){
		printf("1\n");
	}
	else if(a==0 && b==1 && c==0){
		printf("1\n");
	}
	else if(a==0 && b==0 && c==1){
		printf("1\n");
	}
	else if(a==0 && b==0 && c==0){
		printf("0\n");
	}
	return 0;
}