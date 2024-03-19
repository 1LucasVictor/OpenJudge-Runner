#include<stdio.h>

int main(void){
	long long int a,b,c,k,sum=0;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

	if(k>=a){
		k=k-a;
		sum+=a;
	}
	if(k>=b)k=k-b;
	
	sum-=k;

	printf("%lld",sum);



  return 0;
}