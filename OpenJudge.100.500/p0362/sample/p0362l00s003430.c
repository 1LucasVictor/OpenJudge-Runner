#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a < b) || (a < c)){
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	
	return (0);
}