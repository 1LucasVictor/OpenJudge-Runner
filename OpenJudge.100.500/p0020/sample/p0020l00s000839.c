#include <stdio.h>
#include <math.h>

int main(){
	int n,i,j;
	long long int ip[8];
	double p[8];
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p[0],&p[1],&p[2],&p[3],&p[4],&p[5],&p[6],&p[7]);
		for(j = 0;j < 8;j++) {
			ip[j] = (long long int)(p[j] * 100000);
		}
		if((ip[3] - ip[1]) * (ip[6] - ip[4]) == (ip[2] - ip[0]) * (ip[7] - ip[5])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}