#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long ll;

int main(void){
	ll a, result;
  	long double b;
	scanf("%lld", &a);
  	scanf("%Lf", &b);
    
	b *= 100;
  	b = round(b);
  	
	result = a*b/100;
  	printf("%lld", result);
	return 0;

}