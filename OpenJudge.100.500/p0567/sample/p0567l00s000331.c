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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n", (a < b + c) ? (b + c - a) : 0);
	return 0;
}
