#include <stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	float x1[100],y1[100],x2[100],y2[100],x3[100],y3[100],x4[100],y4[100];
	for(i=0;i<n;i++){
		scanf("%f %f %f %f %f %f %f %f",&x1[i],&y1[i],&x2[i],&y2[i],&x3[i],&y3[i],&x4[i],&y4[i]);
	}
	double a1[100],a2[100],b1[100],b2[100];
	for(i=0;i<n;i++){
		a1[i]=x2[i]-x1[i];
		a2[i]=y2[i]-y1[i];
		b1[i]=x4[i]-x3[i];
		b2[i]=y4[i]-y3[i];
		if((a1[i]*b2[i])-(a2[i]*b1[i])==0){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}
	return 0;
}
