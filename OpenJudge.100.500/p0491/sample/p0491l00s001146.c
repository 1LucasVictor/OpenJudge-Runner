#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int K,N,t,a;
	double k;
    scanf("%lld%lld",&N,&K);
    t=N%K;
    k=(double)K;
    if(t>=k/2.0) a=abs(t-K);
    else a=t;
    printf("%lld",a);
	return 0;
}