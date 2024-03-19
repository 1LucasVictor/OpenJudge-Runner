#include <stdio.h>
#include <math.h>

void main()
{
  int n, k, r=0;
  scanf("%d%d", &n, &k);
  if(n<k)
    printf("%d", n);
  else if(n%k==0)
    printf("%d", 0);
  else 
    printf("%d", n/k);
}
