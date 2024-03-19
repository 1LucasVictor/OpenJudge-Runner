#include<stdio.h>

void main()
{
	int inputConf;
	double a, b;
	double ans;

	inputConf = scanf("%lf", &a);
	inputConf = scanf("%lf", &b);

	ans = a * b-0.5;
	if (ans < 0) {
		ans = 0;
	}
	printf("%.0lf", ans);

}