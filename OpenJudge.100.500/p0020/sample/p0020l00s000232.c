#include <stdio.h>

int main()
{
	int n;
	double x[4], y[4];

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);

		if((x[1]-x[0])*(y[3]-y[2]) == (y[1]-y[0])*(x[3]-x[2])) puts("YES");
		else puts("NO");
	}

	return 0;
}