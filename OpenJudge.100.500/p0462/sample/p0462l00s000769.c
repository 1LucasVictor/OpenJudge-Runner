#include<stdio.h>

int main(void){
	long long int a,c;
	double b;
	scanf("%lld %lf",&a,&b);
	c=(long long int)(b*100);
	printf("%lld",(long long int)((a*c)/100));
}