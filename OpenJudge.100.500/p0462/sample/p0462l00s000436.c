#include<stdio.h>
#include<string.h>

int main(){
	long long int a,res;
	double b;
	scanf("%lld",&a);	
	scanf("%lf",&b);
	b*=100;
	res=(a*(b*100))/100;
	printf("%lld\n",res/100);

	return 0;
}			