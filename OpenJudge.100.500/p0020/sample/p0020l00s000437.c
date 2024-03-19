#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	int i = 0;
	int n;
	double s;
	double eps = 0.00000000001;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &x4, &y1, &y2, &y3, &y4);
		
		x2 -= x1;
		y2 -= y1;
		x4 -= x3;
		y4 -= y3;
		
		s = (x2 * y4) - (y2 * x4);
		
		s = abs(s);
		
		if (s < eps) {
			s = 0;
		}
		
		if (s == 0) {
			printf("YES\n");
		}
		
		else {
			printf("NO\n");
		}
	}
	
	return 0;
}