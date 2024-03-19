#include<stdio.h>
int main(){
	long long a,b,c,n;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
	if(n>a){
		n-=a;
		if(n>b){
			n-=b;
			if(n>0)printf("%lld",a-n);
		}
		else{
			printf("%lld",a);
		}
	}
	else{
		printf("%lld",n);
	}
	return 0;
}