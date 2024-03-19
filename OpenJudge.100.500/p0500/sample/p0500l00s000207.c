/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/

	coding: utf-8
	lang: C (GCC 5.4.1)
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
	int n, m;
	int s[7], c[7];
	int beg = 1, ans = -1;
	int temp;
	int cnt = 0;

	scanf("%d%d", &n,&m);
	for(int i = 0; i < n - 1; ++i)	beg *= 10;

	// check
	for (int k = beg; k < beg * 10; ++k)
	{
		for (int i = 0; i < m; ++i)	scanf("%d%d", &s[i], &c[i]);
		cnt = 0;

		for (int i = 0; i < m; ++i)
		{
			temp = k;
			for (int j = 0; j < n - s[i]; ++j)	temp /= 10;
			if(temp % 10 == c[i])	++cnt;
		}
		if(cnt == m){
		  ans = k;
		  break;
		}
	}
	printf("%d\n", ans);
	return 0;
}
