// AtCoder ABC070 B - Two Switches
// 2020.1.25 bal4u

#include <stdio.h>

int main()
{
	int A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	if (A < C) A = C;
	if (B > D) B = D;
	if (A < B) printf("%d\n", B-A);
	else puts("0");
	return 0;
}
