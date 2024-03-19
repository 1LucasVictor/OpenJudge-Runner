#include <stdio.h>

int main()
{
	float a = 0, b = 0;
	float k = 0;
	int tmp = 0;

	if(scanf("%f %f", &a, &b) != 0);

	k = ((a * a) - (b * b)) / (2 * (a - b));
	tmp = (int)(10 * k);

	if ((tmp % 10) > 0)
		printf("IMPOSSIBLE\n");
	else
		printf("%d\n", (int)k);

	return 0;
}