#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define ll long long

int main(void){
	ll a, b;

	scanf("%lld%lld", &a, &b);

	if(b%a==0){
		printf("%lld\n", a+b);
	} else {
		printf("%lld\n", b-a);
	}
	return 0;
}