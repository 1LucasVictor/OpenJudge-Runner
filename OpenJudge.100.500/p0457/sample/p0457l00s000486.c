#include <stdio.h>
#define max(x, y) ((x)>(y) ? (x) : (y))

int main(){
  int n, m, k;  scanf("%d %d %d", &n, &m, &k);
  long a[200005] = {0}, b[200005] = {0};
  int alen = 0, blen = 0;
  for(int i=1; i<=n; i++){
    long now;  scanf("%ld", &now);
    a[i] = a[i-1] + now;
    if(a[i] <= k)  alen = i;
  }
  for(int i=1; i<=m; i++){
    long now;  scanf("%ld", &now);
    b[i] = b[i-1] + now;
    if(b[i] <= k)  blen = i;
  }
  a[n+1] = b[m+1] = 1<<30;

  long ans = 0;

  for(int i=blen; i>=0; i--){
    int j = 0;
    while(b[i] + a[j+1] <= k) j++;
    ans = max(ans, j+i);
  }
  for(int i=alen; i>=0; i--){
    int j = 0;
    while(a[i] + b[j+1] <= k) j++;
    ans = max(ans, j+i);
  }

  printf("%ld\n", ans);

  return 0;
}
