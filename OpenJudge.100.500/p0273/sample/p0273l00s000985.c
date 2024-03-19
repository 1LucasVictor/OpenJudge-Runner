#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	MAX_N 44
int dp[MAX_N+1];

int main(int argc, char* argv[]){
  int i,j,n;
  scanf("%d\n", &n);
  n = n+1;
  memset(dp, 0, sizeof(dp));
  dp[0] = 1;
  dp[1] = 1;
  for (i=2;i<n;i++) {
    dp[i] = dp[i-1] + dp[i-2];
  }
  printf("%d\n", dp[n-1]);
}