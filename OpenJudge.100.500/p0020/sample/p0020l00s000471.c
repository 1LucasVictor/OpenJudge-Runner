#include <stdio.h>

int main(){
	int n,i;
	double p[8];
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p[0],&p[1],&p[2],&p[3],&p[4],&p[5],&p[6],&p[7]);
		if((p[3] - p[1]) * (p[6] - p[4]) - (p[2] - p[0]) * (p[7] - p[5]) == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}