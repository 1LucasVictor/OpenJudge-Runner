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
	long long int n, m,k=0;
	char str[5];
	scanf("%s", str);

	if (str[0] == '1') { k++; }
	else {  }

	if (str[1] == '1') { k++; }
	else {  }
	if (str[2] == '1') { k++; }
	else {  }
	
	printf("%lld", k);
}
