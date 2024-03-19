#include <stdio.h>

int main(void)
{
  int n;
  int i;
  int a[200000];
  int buka[200000];
  scanf("%d", &n);
  for(i=0;i<n-1;i++){
    scanf("%d", &a[i]);
    buka[a[i]] += 1;
  }
  for(i=1;i<=n;i++){
    printf("%d\n", buka[i]);
  }
  return 0;
}