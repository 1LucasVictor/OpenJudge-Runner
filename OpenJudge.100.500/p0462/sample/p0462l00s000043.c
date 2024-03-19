#include <stdio.h>

int main(){
	unsigned long long a;

	// b の整数部分と小数部分
	unsigned long long b_integer, b_decimal;

	// %*c で小数点の 1 文字分をよける
	scanf("%llu%llu%*c%llu", &a, &b_integer, &b_decimal);

	// 小数点以下は 2 桁までしかないので， 100 倍すると整数になる
	unsigned long long b_times_100 = b_integer * 100 + b_decimal;

	printf("%llu\n", a * b_times_100 / 100);

}
