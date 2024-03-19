#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

int main(void){
	long long int a,b,c,k;
	long long int ans=0;

	scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
	if(a<k){
		ans=a;
		if(a+b<k){
			ans=a-(k-(a+b));
		}else{
			ans=a;
		}
	}else{
		ans=k;
	}
	printf("%lld",ans);

	return 0;
}
