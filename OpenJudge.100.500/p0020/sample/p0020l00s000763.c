#include <stdio.h>

int main(void) {
	float x[4],y[4];
	double line1, line2;
	int N,i;
	scanf("%d",&N);
	
	for(i = 0; i < N; i++){
		scanf("%f %f %f %f %f %f %f %f", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);
		line1 = (y[0]-y[1])/(x[0]-x[1]);
		line2 = (y[2]-y[3])/(x[2]-x[3]);
		if(line1 == line2) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
	
}