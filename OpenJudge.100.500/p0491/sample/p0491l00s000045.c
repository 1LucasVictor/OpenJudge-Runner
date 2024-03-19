#include<stdio.h>
long long n,k;
int main(void)
{
	scanf("%lld%lld",&n,&k);
	int p,m;
	p=n%k;
	m=k-n%k;
	if(p<m){
		printf("%lld\n",p);
	}
	else{
		printf("%lld\n",m);
	}
	return 0;
}