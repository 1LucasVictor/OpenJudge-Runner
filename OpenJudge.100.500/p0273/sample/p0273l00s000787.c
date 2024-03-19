#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define iin(x) scanf("%d", &x)
#define lin(x) scanf("%lld", &x)
#define fin(x) scanf("%lf", &x)

#define iout(x) printf("%d", x)
#define lout(x) printf("%lld", x)
#define fout(x) printf("%.10f", x)
#define _ putchar(' ')
#define endl puts("")

#define REP(i, x, n) for(i = (x); i < (n); i++)
#define rep(i, n) REP(i, 0, n)

int dp[55];

int fib(int n) {
  if(~dp[n]) return dp[n];
  if(n < 2) return dp[n] = 1;
  return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
  int n;
  iin(n);
  memset(dp, -1, sizeof(dp));
  iout(fib(n)),endl;
  return 0;
}