#include <stdio.h>

int main()
{
	int A, B, T;
	scanf("%d %d %d", &A, &B, &T);		
	
	printf("%d", (T - T%A)*B / A);
	
	return 0;
} 