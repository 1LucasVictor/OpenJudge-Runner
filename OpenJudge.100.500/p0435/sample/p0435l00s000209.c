#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n,ans=0,i;
	double k;
	scanf("%d%lf",&n,&k);
	double x[n],y[n];
	for(i=0;i<n;i++)
		scanf("%lf %lf",&x[i],&y[i]);
	for(i=0;i<n;i++){
		int xx=x[i]*x[i];
		int yy=y[i]*y[i];
//		printf("%lf %lf\n",x[i],y[i]);
		if((sqrt(xx+yy))<=k){
			//printf("%f\n",sqrt(xx+yy));
			ans++;
		}
	}
	printf("%d\n",ans);
}