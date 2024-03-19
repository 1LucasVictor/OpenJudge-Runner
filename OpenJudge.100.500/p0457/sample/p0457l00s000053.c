#include <stdio.h>
typedef long long ll;

int main(void){
  int n, m, k, i, j;
  scanf("%d %d %d", &n, &m, &k);
  ll a[n+1], b[m+1], ans = 0;
  
  b[0] = a[0] = 0;
  for(i = 1; i <= n; i++){
    a[i] = 0;
    scanf("%lld", &a[i]);
    a[i] += a[i-1];
  }
  for(j = 1; j <= m; j++){
    b[j] = 0;
    scanf("%lld", &b[j]);
    b[j] += b[j-1];
  }
  
  for(i = 0; a[i] <= k; i++){
    for(j = 0; a[i] + b[j] <= k; j++){
      if(i + j > ans)ans = i + j;
    }
  }
  printf("%lld", ans);
  
  return 0;
}