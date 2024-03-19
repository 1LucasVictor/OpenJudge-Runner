#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;
	while (scanf("%lf%lf", &a, &b) != EOF) {
		double sum = a * b;
		printf("%.0f\n", floor(sum));
		
	}

	return 0;
}