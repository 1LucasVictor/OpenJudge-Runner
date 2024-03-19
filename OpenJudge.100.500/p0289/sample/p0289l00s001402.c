#include <stdio.h>
int main(void){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long temp_a,temp_b,c=1,GCD;
	if(a<=b){
		temp_a=b;
		temp_b=a;
	}
	else{
		temp_a=a;
		temp_b=b;
	}
	while(1){
		c=temp_a%temp_b;
		if(c==0){ 
			temp_a=temp_b;
			break;
		}
		temp_a=temp_b;
		temp_b=c;
	}
	GCD=temp_a;
	printf("%lld\n",GCD);
	return 0;
}