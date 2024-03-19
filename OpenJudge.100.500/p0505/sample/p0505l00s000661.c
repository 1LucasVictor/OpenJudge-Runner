#include <stdio.h>

int main(void)
{
  int h, n, a, s=0;
  
  scanf("%d%d", &h, &n);

  for (int i=0; i<n; i++) {
    scanf("%d", &a);
    s+=a;
  }
  
  if (h<=s)
    printf("Yes\n");
  else
    printf("No\n");
    
  return 0;
}