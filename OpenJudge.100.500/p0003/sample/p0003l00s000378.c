#include<stdio.h>
#define N 100
int main(){
	double a[N]={0},b[N]={0},c[N]={0},d[N]={0},e[N]={0},f[N]={0};
	int tmp;
	for(tmp=0;scanf("%lf %lf %lf %lf %lf %lf",&a[tmp],&b[tmp],&c[tmp],&d[tmp],&e[tmp],&f[tmp])!=EOF;tmp++);
	
	int i,divisor=0;
	for(i=0;i<tmp;i++){
		divisor=a[i]*e[i]-b[i]*d[i];
		printf("%.3f %.3f\n",(c[i]*e[i]-b[i]*f[i])/divisor,(a[i]*f[i]-c[i]*d[i])/divisor);
	}
	return 0;
}