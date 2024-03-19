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
	int tap = 1;
	int ans = 0;
	scanf("%d%d",&a,&b);

	while(tap < b){
		tap += (a - 1);
		++ans;
	}
	printf("%d\n", ans);
	return 0;
}