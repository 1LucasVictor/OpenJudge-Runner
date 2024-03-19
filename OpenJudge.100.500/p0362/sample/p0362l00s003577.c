#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	
	scanf("%d %d %d", &a,&b,&c);
	
	if (a < b && b < c) {
		printf("Yes");
	} else {
		printf("No");
	}
	
	printf("\n");
	
	return 0;
}


