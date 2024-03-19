#include <stdio.h>
#include <limits.h>
#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))
#define abs(x) ((x) < 0 ? -(x) : (x))
 
int main()
{
  int n,m,k;
  scanf("%d%d%d",&n,&m,&k);
  int i = 0;
  unsigned long a[n];
  unsigned long dp[n+m];
  while (i < n)
  {
    scanf("%lu",&a[i]);
    dp[i] = 0;
    i++;
  }
  unsigned long b[m];
  i = 0;
  while (i < m)
  {
    scanf("%lu",&b[i]);
    dp[n+i] = 0;
    i++;
  }
  dp[0] = 0;
  i = 1;
  int x,y;
  x = 0;
  y = 0;
  int cnt = 0;
  while (i <= m+n)
  {
    //printf("%d\n",dp[i-1]);
    //printf("a[x]:%d b[y]:%d\n",a[x],b[y]);
  	if (a[x]+dp[i-1] <= k && b[y]+dp[i-1] <= k && a[x] < b[y])
    {
      dp[i] = a[x]+dp[i-1];
      x++;
      cnt++;
    }
  	else if (a[x]+dp[i-1] <= k && b[y]+dp[i-1] <= k && a[x] > b[y])
    {
      dp[i] = b[y]+dp[i-1];
      y++;
      cnt++;
    }
  	else if (a[x]+dp[i-1] <= k && b[y]+dp[i-1] > k)
    {
      dp[i] = a[x]+dp[i-1];
      x++;
      cnt++;
    }
  	else if (a[x]+dp[i-1] > k && b[y]+dp[i-1] <= k)
    {
      dp[i] = b[y]+dp[i-1];
      y++;
      cnt++;
    }
  	else
    {
      dp[i] = dp[i-1];
      break;
    }
    if (x == n)
      a[x] = k;
    if (y == m)
      b[y] = k;
    i++;
  }
  printf("%d",cnt);
  
}