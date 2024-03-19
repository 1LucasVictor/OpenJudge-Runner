#include<stdio.h>

int main()
{
	int x,i,h=0;

	scanf("%d",&x);
	while(x>=500){
		x-=500;
		h+=1000;
	}
	while(x>=5){
		x-=5;
		h+=5;
	}
	printf("%d",h);
	return 0;
}