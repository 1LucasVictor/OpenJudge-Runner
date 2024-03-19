#include <stdio.h>

int main(){ 
	long long l,r,f,s,i,j;
	scanf("%lld %lld",&l,&r);
	for(i = l;i <= r;i++){
		if(i%2019==0){
			printf("0");
			return 0;
		}
	}
	printf("%d",l * (l+1) % 2019);
	return 0;
}