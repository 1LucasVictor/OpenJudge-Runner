#include <stdio.h>

int main(){
  int n;
  int a[200010];
  
  int i, x;
  int ans[200010];
  x = scanf("%d", &n);
  for(i=2; i<=n; i++)
    x = scanf("%d", &a[i]);
  for(i=2; i<=n; i++)
    ans[a[i]]++;
  for(i=1; i<=n; i++)
    printf("%d\n", ans[i]);
}