/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{
	int a,b;
	int k;
	scanf("%d%d",&a,&b);
	k = (a + b) / 2;
	if(abs(a - k) == abs(b - k))	printf("%d\n", k);
	else puts("IMPOSSIBLE");
	return 0;
}
