#include<stdio.h>
#include<math.h>
int main(void){
	long long int d,n;
	scanf("%lld %lld",&d,&n);
	if(n==100){n++;}
	printf("%lld",n*(long long int)pow(100,d));
	return 0;
}