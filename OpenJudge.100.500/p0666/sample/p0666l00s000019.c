#include<stdio.h>
int main(void){
	int x,a,b,c;
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&b);
	c=b-a+1;
	if(c<x){
		printf("delicious");
	}else if(c==x){
		printf("safe");
	}else{
		printf("dangerous");
	}
	return 0;
}