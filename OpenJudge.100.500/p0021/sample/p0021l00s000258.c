#include <stdio.h>

int main(void) {
	long long a[5000];
	long long ask[5000];
	int max;
	int i;
	int j;
	int k;
	int sign;
	long long saidaiti;
	long long now;
	while(1) {
		scanf("%d",&max);
		if(max==0)break;
		for(i=0;i<max;i++)scanf("%lld",&a[i]);
		for(i=0,j=-1,sign=0;i<max;i++) {
			if(a[i]*sign<=0 && a[i]!=0) {
				sign=(a[i]>0)?1:-1;
				j++;
				ask[j]=0;
			}
			ask[j]+=a[i];
		}
		for(i=0;i<=j;i++) {
			if(ask[i]>=0)break;
		}
		if(i>j) {
			saidaiti=a[0];
			for(i=1;i<max;i++) {
				if(a[i]>saidaiti)saidaiti=a[i];
			}
		} else {
			max=j+1;
			saidaiti=ask[0];
			for(i=1;i<=max;i++) {
				for(j=0;j<=max-i;j++) {
					now=0;
					for(k=j;k<j+i;k++)now+=ask[k];
					if(now>saidaiti)saidaiti=now;
				}
			}
		}
		printf("%d\n",saidaiti);
	}
	return 0;
}