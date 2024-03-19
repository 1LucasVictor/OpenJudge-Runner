
#include<stdio.h>
#define N 500000
#define INFTY (1<<30)

int dp[50];

int fib(int n){
	if (n == 0 || n == 1) return dp[n] = 1;
	if (dp[n] != -1) return dp[n];

	return dp[n] = fib(n - 1) + fib(n - 2);
}




int main(){

	int i;
	int n;

	for (i = 0; i < 50; i++) dp[i] = -1;

	scanf("%d", &n);
	printf("%d", fib(n));

	return 0;

}