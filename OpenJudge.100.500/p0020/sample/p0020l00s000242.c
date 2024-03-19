#include <stdio.h>

int main(void)
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	int n;
	
	scanf("%d", &n);
	
	while (n != 0){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		if (x1 - x2 == x3 - x4){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		n--;
	}
	
	return 0;
}