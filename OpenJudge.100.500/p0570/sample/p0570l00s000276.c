#include <stdio.h>

int main(void)
{
	long a;
	long b;
	
	scanf("%ld",&a);
	scanf("%ld",&b);

	if ((a + b) % 2 == 0){
		printf("%ld",(a + b) / 2);
	}
	
	else {
		printf("IMPOSSIBLE");
	}
	return (0);
}