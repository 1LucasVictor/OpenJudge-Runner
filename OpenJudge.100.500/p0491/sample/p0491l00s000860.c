#include<stdio.h>
long long n,k;
int main(void)
{
	scanf("%lld%lld",&n,&k);
	int p,m;
	p=n%k;
	m=k-n%k;
	if(p<m){
		printf("%d\n",p);
	}
	else{
		printf("%d\n",m);
	}
	return 0;
}