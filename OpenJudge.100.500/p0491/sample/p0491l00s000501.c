#include <stdio.h>
int main()
{
  int n,k,min;
  scanf("%d",&n); scanf("%d",&k);
  min=k-(n%k);
  if(n%k<=min) min=n%k;
  printf("%d",min);
  return 0;
}