#include <stdio.h>

int main()
{
  int i, j;
  int n;
  int a[200000], b[200000] = {0};
  
  scanf("%d", &n);
  for(i = 1; i < n; i++){
    scanf("%d", &a[i]);
    b[a[i] - 1]++;
  }
  for(i = 0; i < n; i++){
    printf("%d\n", b[i]);
  }
  
  return 0;
}