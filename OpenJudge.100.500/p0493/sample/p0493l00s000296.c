#include<stdio.h>
#define gc() getchar()
int in() {   // 非負整数の入力
	int n = 0; int c;
	c = gc();
	do n = 10 * n + (c & 0xf); while ((c = gc()) >= '0');
	return n;
}
int main()
{
	int n,a,b;
	n = in();
	printf("%d", (n / 500) * 1000 + (n % 500 / 5) * 5);
}