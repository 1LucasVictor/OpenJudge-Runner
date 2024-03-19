#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	d = a - b;
	
	if (c > d){
		printf("%d",c-d);
	}
	
	else {
		printf("0");
	}
	
	return (0);
}