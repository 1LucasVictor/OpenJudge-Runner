#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
int minimum(int a, int b) {
	if (a > b)return b;
	if (b > a)return a;
	return a;
}
int main(void) {
	long long int N, K;
	int a = 0;
	int b = 0;
	scanf("%lld%lld", &N, &K);
	a = N % K;
	b = K - a;
	printf("%d", minimum(a,b));
	return 0;
}