#include<stdio.h>
main(){
	double x[100],y[100];
	double a,b,c,d;
	int n,j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x[j],&y[j],&x[j+1],&y[j+1],&x[j+2],&y[j+2],&x[j+3],&y[j+3]);
		a=x[j]-x[j+1];
		b=y[j]-y[j+1];
		c=x[j+2]-x[j+3];
		d=y[j+2]-y[j+3];
		if((a*d-b*c)==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}