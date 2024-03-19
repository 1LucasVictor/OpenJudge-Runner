#include<stdio.h>
int main(void){
	long long int a,b,c,d,e,f;
	while(scanf("%lld %lld",&a,&b)!=EOF){
		e=a;
		f=b;
		while(1){
			if(a>b){
				a=a-b;
			}else if(a<b){
				b=b-a;
			}else{
				c=a;
				break;
			}
		}
		d=e*f/c;
		printf("%lld %lld\n",c,d);
	}
	return 0;
}
