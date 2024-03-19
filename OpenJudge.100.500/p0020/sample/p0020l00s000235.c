#include <stdio.h>
#include <math.h>

int main(){
	double x[4],y[4];
	double vx[2],vy[2];
	int n,i,j;

	scanf("%d",&n);
	for(i=0; i<n; i++){
		for(j=0; j<4; j++){
			scanf("%lf %lf",&x[j],&y[j]);
		}
			vx[0]=x[0]-x[1];
			vy[0]=y[0]-y[1];

			vx[1]=x[2]-x[3];
			vy[1]=y[2]-y[3];


			if(vx[0]*vy[1]-vy[0]*vx[1]==0.0)printf("YES\n");
			else printf("NO\n");
	}


	return 0;
}