#include <stdio.h>
#define max(x, y) ((x)<(y) ? (y) : (x))

int main(){
  int n, m, k;  scanf("%d %d %d", &n, &m, &k);
  long a[200005] = {0}, b[200005] = {0}, now;
  for(int i=1; i<=n; i++){
    scanf("%ld", &now);
    a[i] = a[i-1] + now;
  }
  for(int i=1; i<=m; i++){
    scanf("%ld", &now);
    b[i] = b[i-1] + now;
  }

  long ans = 0;
  int pre = m;
  for(int i=0; i<=n; i++){
    while(a[i] + b[pre] > k)  pre--;
    ans = max(ans, i+pre);
  }
      
  printf("%ld\n", ans);

  return 0;
}
