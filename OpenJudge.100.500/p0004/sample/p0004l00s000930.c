#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	long long int a,b,i;
	
	while(0<=scanf("%lld%lld",&a,&b)){
		if(a>b){
			i=a;
			a=b;
			b=i;
		}
		
		for(i=a;;i--){
			if(a/i==(double)a/i & b/i==(double)b/i){
				break;
			}
		}
		printf("%lld %lld\n",i,a*b/i);
	}
	return 0;
}