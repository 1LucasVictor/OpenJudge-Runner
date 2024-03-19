#include <stdio.h>
#include <math.h>
int main(){
	long long l,r,a=2020;
	int t;
	scanf("%lld%lld",&l,&r);
	if((l/2019)!=r/2019)printf("0");
	else{
		for(long long i=l;i<=r;i++){
			for(long long j=i+1;j<=r;j++){
				t=(i*j)%2019;
				if(t<a)a=t;
						
			}
		}
	}
	printf("%d",a);
	return 0;	
}