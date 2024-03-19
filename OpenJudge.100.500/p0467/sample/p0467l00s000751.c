#include<stdio.h>

int main(void){
	long long int a,b,c,k,sum=0;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

	k=k-a;
	sum+=a;
	k=k-b;
	sum-=k;

	printf("%lld",sum);



  return 0;
}