#include <stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	double x1[100],y1[100],x2[100],y2[100],x3[100],y3[100],x4[100],y4[100];
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i],&x4[i],&y4[i]);
	}
	double a[100],b[100];
	for(i=0;i<n;i++){
		a[i]=(y2[i]-y1[i])/(x2[i]-x1[i]);
		b[i]=(y4[i]-y3[i])/(x4[i]-x3[i]);
		if(a[i]==b[i]){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}
	return 0;
}
