#include<stdio.h>
double rounding(double x, int n)
{
	double i, DP = 1;
	double X;
	
	for(i = 0; i < (n - 1); ++i)
	{
		DP *= 10;
	}
	X = x * DP;
	if(x > 0)
		X = (int)(X + 0.5);
	else
		X = (int)(X - 0.5);
	
	return (double)(X / DP);
}

double determinant(double a, double b, double c, double d)
{
	return (a * d) - (b * c);
}

int main(void)
{
	double a, b, c, d, e, f;
	double A, D1, D2;
	double x, y, X, Y;
	
	while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF)
	{
		A  = determinant(a, b, d, e);
		D1 = determinant(c, b, f, e);
		D2 = determinant(a, c, d, f);
		x = (D1 / A);
		y = (D2 / A);
		
		X = rounding(x, 4);
		Y = rounding(y, 4);
		
		printf("%.3f %.3f\n", X, Y);
	}
	return 0;
}