#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{

	int a;
	double p_a;
	int ans;

	scanf("%d", &a);

	p_a = (double)a;

	ans = (int) (p_a + pow(p_a, 2) + pow(p_a, 3));

	printf("%d", ans);


	return 0;
}
