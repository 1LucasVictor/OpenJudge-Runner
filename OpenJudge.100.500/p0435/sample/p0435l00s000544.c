#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n,ans=0,i;
	int k;
	scanf("%d%d",&n,&k);
	int x[n],y[n];
	for(i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
	for(i=0;i<n;i++){
		if(x[i]<0)x[i]=x[i]*(-1);
		if(y[i]<0)y[i]=y[i]*(-1);
//		printf("%lf %lf\n",x[i],y[i]);
			//printf("%f\n",sqrt(xx+yy));
			if(x[i]*x[i]+y[i]*y[i]<=k*k)
			ans++;
	}
	printf("%d\n",ans);
}