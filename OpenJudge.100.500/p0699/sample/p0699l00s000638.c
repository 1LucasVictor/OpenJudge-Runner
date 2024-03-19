#include <stdio.h>

int main(void)
{
	int A, B, C;
	int five = 0, seven = 0;

	scanf("%d%d%d", &A, &B, &C);

	if (A == 5)
		five++;
	if (A == 7)
		seven++;
	if (B == 5)
		five++;
	if (B == 7)
		seven++;
	if (C == 5)
		five++;
	if (C == 7)
		seven++;

	if (five == 2 && seven == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}