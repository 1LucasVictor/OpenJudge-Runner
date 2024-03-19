#include<stdio.h>
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
		A = determinant(a, b, d, e);
		D1 = determinant(c, b, f, e);
		D2 = determinant(a, c, d, f);
		x = D1 / A;
		y = D2 / A;
		
		if(x >= 0 && y >= 0)
		{
			printf("%.3f %.3f", (x + 0.0005), (y + 0.0005));
		}
		else if(x < 0 && y >= 0)
		{
			printf("%.3f %.3f", (x - 0.0005), (y - 0.0005));
		}
		else if(x >= 0 && y < 0)
		{
			printf("%.3f %.3f", (x + 0.0005), (y - 0.0005));
		}
		else
		{
			printf("%.3f %.3f", (x + 0.0005), (y + 0.0005));
		}
	}
	return 0;
}