#include <stdio.h>
int main()
{
  int n,m,i;
  int boss[200000];
  
  scanf("%d", &n);
  i = 1;
  while(i < n)
  {
    scanf("%d", &m);
    boss[m] += 1;
    i++;
  }
  
  i = 0;
  while(i < n)
  {
    printf("%d\n", boss[i+1]);
    i++;
  }
  
  return (0);
}