#include <stdio.h>
#include <math.h>

int main() {
	int nps;
	double dist;
	int npassed;
	int i;

	scanf("%d %lf", &nps, &dist);
	npassed = 0;
	for(i=0; i<nps; i++) {
		double x, y;
		scanf("%lf %lf", &x, &y);
		if(sqrt(x*x + y*y) <= dist) 
			npassed++;
	}

	printf("%d\n", npassed);
	return 0;
}
