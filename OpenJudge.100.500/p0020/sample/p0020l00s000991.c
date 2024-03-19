#include <stdio.h>
#include <math.h>

int main(){
	double x[4];
	double y[4];
	double ab_x,ab_y;
	double cd_x,cd_y;
	int n,i,j;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		for(j=0; j<4; j++)scanf("%lf %lf",&x[j],&y[j]);
		ab_x=x[1]-x[0];
		ab_y=y[1]-y[0];
		cd_x=x[3]-x[2];
		cd_y=y[3]-y[2];
		if(fabs(ab_x*cd_y-ab_y*cd_x)<0.00001)printf("YES\n");
		else printf("NO\n");
	}
	return 0; 
}