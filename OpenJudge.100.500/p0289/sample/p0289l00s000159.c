#include<stdio.h>

int main(void){

	int a,b,x,y;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a<b){
		x=a;
		a=b;
		b=x;
	}
	
	y=a%b;
	while(y!=0){
		a=b;
		b=y;
		y=a%b;
	}
	
	printf("%d\n",b);
	
	return 0;
}
