#include <stdio.h>
typedef long long ll;

int main(void){
  int n, m, k, i, j;
  scanf("%d %d %d", &n, &m, &k);
  ll a[n+1], b[m+1], ans = 0, best = 0;
  
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
    if(b[j] <= k)best = j;
  }
    
  for(i = 0; a[i] <= k; i++){
    while(a[i] + b[best] > k)best--;
    if(i + best > ans)ans = i + best;
  }
  
  printf("%lld", ans);
  return 0;
}