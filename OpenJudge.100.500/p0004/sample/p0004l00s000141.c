#include<stdio.h>

int main(){
	unsigned long long int a,b,tempa,tempb,divi=1;
	unsigned long long int grecomdivi = 0,leacommul = 0;
	
	while(scanf("%lld %lld",&a,&b) != EOF){
		tempa=a;
		tempb=b;
		divi=1;
		
		while(divi != 0){
			divi = tempa%tempb;
			if(divi == 0)break;
			tempa = tempb;
			tempb=divi;
		}
		grecomdivi = tempb;
		leacommul = (a*b/grecomdivi);
			
		printf("%lld %lld\n",grecomdivi,leacommul);
	}
	return 0;
}