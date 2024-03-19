// AOJ ALDS1_10_A Fibonacci Number
// 2018.4.27 bal4u

#include <stdio.h>

// バッファを経ずstdinから数値を得る
//#define getchar_unlocked()  getchar()
int in()
{
	int n = 0, c = getchar_unlocked();
	do n = 10*n + (c & 0xf), c = getchar_unlocked(); while (c >= '0');
	return n;
}

int dp[45];

int main()
{
	int n, i;

	n = in();
	dp[0] = 1, dp[1] = 1;
	for (i = 2; i <= n; i++) dp[i] = dp[i-1]+dp[i-2];
	printf("%d\n", dp[n]);
	return 0;
}

