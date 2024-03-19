#include <stdio.h>

double slope(double x1, double x2, double y1, double y2) {

	double slp;
		
	if ((x1 - x2) == 0 || (y1 - y2) == 0)
		slp = 0;
	else
		slp = (x1 - x2) / (y1 - y2);

	return slp;
}

int main(void)
{
	int n;
	double x1[100], x2[100], x3[100], x4[100], y1[100], y2[100], y3[100], y4[100];
	int i = 0;
	double slope1, slope2;

	scanf("%d",&n);

	while (i < n) {
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i],&x4[i],&y4[i]);
		i++;
	}

	for (i = 0; i < n; i++) {
		slope1 = slope(x1[i],x2[i],y1[i],y2[i]);
		slope2 = slope(x3[i], x4[i], y3[i], y4[i]);

		if (slope1 == slope2) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}