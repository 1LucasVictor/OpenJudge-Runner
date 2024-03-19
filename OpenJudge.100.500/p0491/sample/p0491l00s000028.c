#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	while(n > llabs(n-k)){
		n = llabs(n-k);
	}
	printf("%lld",n);
	
}