#include<stdio.h>
#include<math.h>
int main()
{
	double K,N,t;
	long long int a;
    scanf("%lf%lf",&N,&K);
    t=(int)N%(int)K;
    if(t>=K/2) a=abs(t-K);
    else a=t;
    printf("%lld",a);
	return 0;
}
