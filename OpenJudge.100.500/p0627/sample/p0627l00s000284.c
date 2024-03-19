#include<stdio.h>

int main()
{
	int a,b,x,y,z;
	scanf("%d %d",&a,&b);
	x=a+b;
	y=a-b;
	z=a*b;
	if(x>=y && x>=z){
		printf("%d",x);
	}else if(y>=x && y>=z){
		printf("%d",y);
	}else{
		printf("%d",&z);
	}
	
	return 0;
}