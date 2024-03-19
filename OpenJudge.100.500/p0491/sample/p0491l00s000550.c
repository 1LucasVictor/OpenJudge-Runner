#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int K,N,t,a;
    scanf("%lld%lld",&N,&K);
    if(K==0) a=N;
    else{
    t=N%K;
    if(K==0) a=t;
    if(t*2>K) a=abs(t-K);
    else a=t;
    }
    printf("%lld",a);
	return 0;
}