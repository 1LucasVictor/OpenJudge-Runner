#include<stdio.h>

int main(void)
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	int i = 0;
	int n;
	double nai;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &x4, &y1, &y2, &y3, &y4);
		
		x2 -= x1;
		y2 -= y1;
		x4 -= x3;
		y4 -= y3;
		
		nai = (x2 * y2) + (x4 * y4);
		
		if (nai == 0) {
			printf("YES\n");
		}
		
		else {
			printf("NO\n");
		}
	}
	
	return 0;
}