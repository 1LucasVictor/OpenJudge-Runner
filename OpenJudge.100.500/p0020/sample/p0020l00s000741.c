#include <stdio.h>
#include <math.h>

int main(void){
	double x[4], y[4]; int N;
	
	scanf("%d",&N);
	
	for(; N>0; N--){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
		if(x[1]-x[0]==0){
			if(x[3]-x[2]==0) printf("YES\n");
			else printf("NO\n");
		}else{
			if((y[1]-y[0])/(x[1]-x[0])==(y[3]-y[2])/(x[3]-x[2])) printf("YES\n");
			else printf("NO\n");
		}
	}
	
	return 0;
}