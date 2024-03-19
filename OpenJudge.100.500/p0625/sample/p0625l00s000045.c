#include <stdio.h>

int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);

	if(A >= 0 && A <= 8 && B >= 0 && B <= 8) printf("Yay!");
	else printf(":(");
}