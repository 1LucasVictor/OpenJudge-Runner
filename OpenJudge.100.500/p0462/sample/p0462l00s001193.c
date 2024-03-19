#include<stdio.h>
int main(void)
{
	int a, ans;
	double b;

	scanf("%d %lf", &a, &b);

	ans = (int)( (double)a * b);

	printf("%d\n", ans);

	return 0;
}