#include <stdio.h>

int main(){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double ab, cd;
	double error;
	int n, i;

	scanf("%d", &n);
	for( i=0; i<n; i++ ){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
				&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		ab = (y2-y1)/(x2-x1);
		cd = (y4-y3)/(x4-x3);
		error = ab - cd;
		( -1e-9<error&&error<1e-9 )? puts("YES"):puts("NO");
	}

	return 0;
}
	