#include<stdio.h>

int main(void)
{
	int a, x;
	
	scanf("%d", &x);
	scanf("%d", &a);
	
	if (x < a){
		printf("0\n");
	}
	else {
		printf("10\n");
	}
	return 0;
}