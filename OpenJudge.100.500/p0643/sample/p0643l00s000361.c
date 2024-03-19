#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d%d", &a, &b);
	c = a * b;
	d = c % 2;
	if(d == 0){
		printf("Even");
	}else{
		printf("Odd");
	}
	return 0;
}