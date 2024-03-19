#include<stdio.h>
int main()
{
	long long n,m,k,a[200011]={},b[200011]={},t=0,i;

	scanf("%lld%lld%lld",&n,&m,&k);
	for(i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		a[i]+=a[i-1];
	}
	for(i=1;i<=m;i++){
		scanf("%lld",&b[i]);
		b[i]+=b[i-1];
	}

	for(i=0;i<=n;i++){
		while(m>0&&a[i]+b[m]>k)
			m--;
		if(a[i]+b[m]<=k)
			t=i+m>t?i+m:t;
	}
	printf("%lld",t);
	return 0;
}