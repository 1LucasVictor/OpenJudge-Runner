#include <stdio.h>

int main(void) {
	long long a[5000];
	long long ask[5001];
	int max;
	int i;
	int j;
	int sign;
	long long saidaiti;
	long long now;
	while(1) {
		scanf("%d",&max);
		if(max==0)break;
		ask[0]=0;
		for(i=0;i<max;i++)scanf("%lld",&a[i]);
		for(i=0,j=0,sign=0;i<max;i++) {
			if(a[i]*sign<=0 && a[i]!=0) {
				sign=(a[i]>0)?1:-1;
				j++;
				ask[j]=0;
			}
			ask[j]+=a[i];
		}
		for(i=1;i<=j;i++) {
			if(ask[i]>=0)break;
		}
		if(i>j) {
			saidaiti=a[0];
			for(i=1;i<max;i++) {
				if(a[i]>saidaiti)saidaiti=a[i];
			}
		} else {
			max=j+1;
			saidaiti=ask[1];
			for(i=1;i<max;i++)ask[i]+=ask[i-1];
			for(i=1;i<=max;i++) {
				for(j=0;j<=max-i;j++) {
					now=ask[j+i]-ask[j];
					if(now>saidaiti)saidaiti=now;
				}
			}
		}
		printf("%lld\n",saidaiti);
	}
	return 0;
}