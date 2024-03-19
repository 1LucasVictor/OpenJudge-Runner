#include <stdio.h>

int main(){
  int n;
  int a[200001];
  
  int i;
  int ans[200001];
  scanf("%d", &n);
  for(i=2; i<=n; i++)
    scanf("%d", &a[i]);
  for(i=2; i<=n; i++)
    ans[a[i]]++;
  for(i=1; i<=n; i++)
    printf("%d\n", ans[i]);
}