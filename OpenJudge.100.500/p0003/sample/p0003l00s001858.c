#include <stdio.h>
#include <math.h>

int main(void)
{
	double a[6], acopy, x , y;
	int i, ansx, ansy;
	
	while (scanf ("%lf %lf %lf %lf %lf %lf", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5])!= EOF){
		
		y = (a[3] * a[2] - a[0] * a[5]) / (a[3] * a[1] - a[0] * a[4]);
		x = (a[2] - a[1] * y) / a[0];
		printf("%.3f %.3f\n", x, y);
		/*acopy = a[1];
		for (i = 0; i < 3; i++)
		{
			a[i] *= a[4];
		}
		for (i = 3; i < 6; i++)
		{
			a[i] *= acopy;
		}
		a[0] -= a[3];
		if (a[0] == 0) x = 0;
		else {
			a[2] -= a[5];
			x = a[2] / a[0];
		}
		acopy = a[5] - (a[3] * x);
		y = acopy / a[4];
		if (x == -0) x = abs(x);
		if (y == -0) y = abs(y);
		
		ansx = 10000 * x;
		ansy = 10000 * y;
		if (ansx % 10 > 4) ansx += 10;
		if (ansy % 10 > 4) ansy += 10;
		
		printf("%.3f %.3f\n", (double)ansx / 10000, (double)ansy / 10000);*/
	}
	
	return (0);
}