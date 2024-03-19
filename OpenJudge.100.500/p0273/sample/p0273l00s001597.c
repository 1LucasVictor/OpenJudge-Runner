#include<stdio.h>

int memo[50] = { 0 };

int F(int n) {
	if (n < 2)return memo[n] = 1;
	else if (memo[n - 2] && memo[n - 1])return memo[n] = memo[n - 1] + memo[n - 2];
	else if (memo[n - 1])return memo[n] = memo[n - 1] + F(n - 2);
	else if (memo[n - 2])return memo[n] = memo[n - 2] + F(n - 1);
	else return memo[n] = F(n - 2) + F(n - 1);
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", F(N));
	return 0;
}
