#include<stdio.h>
#define MAX 100
int main(){
	double a1[MAX],b1[MAX],e1[MAX],a2[MAX],b2[MAX],e2[MAX];
	double x,y;
	int i,j;
	int count;
	for(i = 0; i < MAX; i++){
		j = i;
		if(scanf("%lf %lf %lf %lf %lf %lf",&a1[i],&b1[i],&e1[i],&a2[i],&b2[i],&e2[i]) == EOF)
			break;
		
	}
	for(i = 0; i < j; i++){
		x = (e1[i]*b2[i] - b1[i]*e2[i]) / (a1[i]*b2[i] - b1[i]*a2[i]);
		y = (e2[i]*a1[i] - e1[i]*a2[i]) / (a1[i]*b2[i] - a2[i]*b1[i]);
		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}