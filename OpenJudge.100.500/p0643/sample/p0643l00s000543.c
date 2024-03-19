#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	c=0;
	d=0;
	scanf("%d %d", &a, &b);
	c = a * b;
	d = c % 2;
	if(d == 0){
		printf("Even");
	}else{
		printf("Odd");
	}
	return 0;
}