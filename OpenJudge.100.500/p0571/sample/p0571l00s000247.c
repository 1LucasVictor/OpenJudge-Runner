#include <stdio.h>

int main(void)
{
	int n, a, b;
	
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (n * a <= b){
		printf("%d\n", n * a);
	}
	else if (n * a > b){
		printf("%d\n", b);
	}
	
	return (0);
}