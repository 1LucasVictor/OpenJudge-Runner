#include <stdio.h>

int main()
{
	int i=0, k=0, p[30], q[30];
	float a[30],b[30],c[30],d[30],e[30],f[30],x[30],y[30];
	
	while(scanf("%f %f %f %f %f %f",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i])!=EOF)
	{
		i++; k++;
	}
	
	for(i=0;i<k;i++)
	{
		x[i] = ((c[i]*e[i]-f[i]*b[i])/(a[i]*e[i]-d[i]*b[i])*1000);
		y[i] = ((c[i]*d[i]-f[i]*a[i])/(b[i]*d[i]-e[i]*a[i])*1000);
		
		(x[i]>0) ? x[i] = x[i] + 0.5 : x[i] - 0.5;
		(y[i]<0) ? y[i] = y[i] + 0.5 : y[i] - 0.5;
		
		p[i] = (int) x[i];	x[i] = (double) p[i];
		q[i] = (int) y[i];	y[i] = (double) q[i];
		
		printf("%.3f %.3f\n",x[i]/1000,y[i]/1000);
	}
	
	return 0;
}