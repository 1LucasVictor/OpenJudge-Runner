#include <stdio.h>

int main(void)
{
	int i,n,m=100000,mod;

	scanf("%d",&n);
	for(i=0;i<n;i++) {
		m*=1.05;
		mod=m%1000;
		m-=mod;
		m+=(mod==0)?0:1000;
	}
	printf("%d\n",m);
	return 0;
}