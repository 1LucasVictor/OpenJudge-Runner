#include<stdio.h>


int main()
{
	int i, k = 0;
	double a, b, c, d, e, f, j;
	double num[200] = { 100 };


	while (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
	{
		if ((a >= -10000 && a <= 10000) && (b >= -1000 && b <= 1000) && (c >= -1000 && c <= 1000) && (d >= -1000 && d <= 1000) && (e >= -1000 && e <= 1000) && (f >= -1000 && f <= 1000))
		{
			if (b*f == c*e)
			{
				num[k] = 0;
			}
			else
			{
				num[k] = (b*f - c*e) / (b*d - a*e);
			}
			++k;
			if (c*d == a*f)
			{
				num[k] = 0;
			}
			else
			{
				num[k] = (c*d - a*f) / (b*d - a*e);
			}
			++k;
		}
	}

	for (i = 0; i < k;)
	{
		printf("%.3f %.3f\n", num[i], num[i + 1]);
		i += 2;
	}
	
	return 0;
}
