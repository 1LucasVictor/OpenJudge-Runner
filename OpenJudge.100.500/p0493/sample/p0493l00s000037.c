#include<stdio.h>
int main(void){
	int x,r;
	scanf("%d",&x);
	r=x%500;
	x=x/500;
	printf("%d",x*1000+r/5*5);
	return 0;
}