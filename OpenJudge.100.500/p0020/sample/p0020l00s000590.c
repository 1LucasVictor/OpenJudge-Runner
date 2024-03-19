#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	double m1, m2;
	int n;
	
	scanf("%d", &n);
	while (n > 0){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		
		if (x2 - x1 == 0 && x4 - x3 == 0){
			printf("YES\n");
			n--;
			continue;
		}
		
		if (x2 - x1 == 0 || x4 - x3 == 0){
			printf("NO\n");
			n--;
			continue;
		}
		
		m1 = (y2 - y1) / (x2 - x1);
		m2 = (y4 - y3) / (x4 - x3);
		
		if (fabs(m1 - m2) <= 0.00001){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		n--;
	}
	return 0;
}