#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//大小比較(大)
long long int big(long long int a, long long int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

//大小比較(小)
long long int small(long long int a, long long int b) {
	if (a >= b) {
		return b;
	}
	else {
		return a;
	}
}

main() {
	long long int c,d,a,b,n, m,k;
	char str[5];
	scanf("%lld%lld%lld",&a,&b,&c);
	if (c-a<=b&&c>=a) { printf("YES"); }else{ printf("NO"); }
	
}