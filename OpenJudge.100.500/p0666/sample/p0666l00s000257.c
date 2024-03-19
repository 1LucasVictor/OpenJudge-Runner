#include<stdio.h>
int main(void){
	int x,a,b,c,d;
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&b);
	c=b-a+1;
	d=c-x;
	if(c<x){
		printf("delicious");
	}else if(c>=x && d>=-1){
		printf("safe");
	}else if(c>x){
		printf("dangerous");
	}
	return 0;
}