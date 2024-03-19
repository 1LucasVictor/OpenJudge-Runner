#include <stdio.h>

int main(void)
{
  long int n;
  long int i;
  long int a[200000];
  long int buka[200000];
  scanf("%ld", &n);
  for(i=0;i<n-1;i++){
    scanf("%ld", &a[i]);
    buka[a[i]] += 1;
  }
  for(i=1;i<=n;i++){
    printf("%ld\n", buka[i]);
  }
  return 0;
}
