#include <stdio.h>
int main()
{
  int n,m,i;
  
  scanf("%d", &n);
  int boss[n];
 
  for (i = 0; i <= n; i++)
    boss[i] = 0;
  
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &m);
    boss[m]++;
  }
  
  for(i = 1; i <= n; i++)
    printf("%d\n", boss[i]);
  
  return (0);
}