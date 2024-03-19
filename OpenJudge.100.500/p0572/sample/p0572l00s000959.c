#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	long long int i, j, k, l, ret, imod, jmod;
	scanf("%lld %lld",&i, &j);
	imod = i % 2019;
	jmod = j % 2019;
	if( j - i >= 2019 || jmod < imod ) ret = 0;	
	else {
		for(k = i; k < j - 1; k++){
			for(l = k+1; l < j; l++){
				if(ret > (k*l) % 2019)ret = (k*l)%2019;
			}
		}
	}
	printf("%lld\n", ret);
}
