#include <stdio.h>

int main(void){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double a12, a34;
	int n;
	int i;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		if(x2 != x1) a12 = (y2 - y1) / (x2 - x1);
		else{
			if(x4 == x3){
				puts("YES");
				return 0;
			}
			else{
				puts("NO");
				return 0;
			}
		}
		if(x4 != x3) a34 = (y4 - y3) / (x4 - x3);

		if(a12 == a34){
			puts("YES");
		}else{
			puts("NO");
		}
	}

	return 0;
}