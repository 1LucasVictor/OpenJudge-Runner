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
	int s1 = 0,s2 = 0;
	int cnt[256] = { 0 },newcnt = 0;
	char s[7];
	scanf("%s",s);
	for (int i = 0; i < 4; ++i)
	{
		++cnt[s[i]];
	}
	for (int i = 0; i < 256; ++i)
	{
		if(cnt[i] == 2)	++newcnt;
	}
	if(newcnt == 2)	puts("Yes");
	else puts("No");
	return 0;

}
