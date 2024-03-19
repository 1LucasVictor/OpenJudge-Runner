#include <stdio.h>
#include <stdlib.h>

int main() {
	float *x1, *y1, *x2, *y2, *x3, *y3, *x4, *y4, xx, yy;
	int n, i, flag;
	scanf("%d",&n);
	x1 = (float *)malloc( sizeof(float) * n);
	y1 = (float *)malloc( sizeof(float) * n);
	x2 = (float *)malloc( sizeof(float) * n);
	y2 = (float *)malloc( sizeof(float) * n);
	x3 = (float *)malloc( sizeof(float) * n);
	y3 = (float *)malloc( sizeof(float) * n);
	x4 = (float *)malloc( sizeof(float) * n);
	y4 = (float *)malloc( sizeof(float) * n);
	
	for(i=0;i<n;i++) {
		scanf("%f %f %f %f %f %f %f %f",
			&x1[i], &y1[i], &x2[i], &y2[i], &x3[i], &y3[i], &x4[i], &y4[i]);
	}
	
	for(i=0;i<n;i++) {
		flag = 0;
		xx = yy = 0.0;
	// See if y2-y1 and y4-y3 is not 0.
		if ( ((y2[i]-y1[i])!=0) && ((y4[i]-y3[i])!=0) ) {
			xx = (y4[i] - y3[i])*(x2[i] - x1[i]);
			yy = (y2[i] - y1[i])*(x4[i] - x3[i]);
			if (xx == yy) flag = 1;
		}else {
			if ( ((y2[i]-y1[i])==0) && ((y4[i]-y3[i])==0) ) {
				flag = 1;
			}
		}
		if (flag==1) printf("YES\n");
		else printf("NO\n");
		
	}
	free(x1);
	free(y1);
	free(x2);
	free(y2);
	free(x3);
	free(y3);
	free(x4);
	free(y4);
	return 0;
}