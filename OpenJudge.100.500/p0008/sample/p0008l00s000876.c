#include <stdio.h>

int main(void) {
	long prm[78498]={2,3},n,m,cnt=2;
	int judge;
	for(n=5;n<=999999;n+=2) {
		judge=1;
		for(m=0;prm[m]*prm[m]<=n;m++) {
			if(n%prm[m]==0) {
				judge=0;
				break;
			}
		}
		if(judge) {
			prm[cnt++]=n;
		}
	}
	while(scanf("%ld",&n)!=EOF) {
		for(cnt=0;prm[cnt]<=n;cnt++){}
		printf("%ld\n",cnt);
	}
	return 0;
}