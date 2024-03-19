#include <stdio.h>
#include <math.h>
int main(){
	long long d,n;
  	scanf("%lld%lld",&d,&n);

	for(int i=0;i<d;i++){
		n*=100;
    }

  	printf("%lld",n);
}
