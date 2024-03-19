#include <stdio.h>

int main(void)
{
	int Wa, Ha, xa, ya, ra, ka, ki, ku, ke;
	scanf("%d %d %d %d %d", &Wa, &Ha, &xa, &ya, &ra);
	ka = xa - ra;
	ki = xa + ra;
	ku = ya - ra;
	ke = ya + ra;

	if (ka > 0 && ki < Wa && ku > 0 && ke < Ha)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}