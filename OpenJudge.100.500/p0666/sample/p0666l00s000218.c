#include<stdio.h>
int main(void){
	int x,a,b,c,d;
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&b);
	c=b-a+1;
	d=x-c;
	if(c<x){
		printf("delicious");
	}else if(c>=x && d>=0){
		printf("safe");
	}else if(c>x&&d<0){
		printf("dangerous");
	}
	return 0;
}