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
  
  i = 1;
  while(i <= n)
  {
    if(boss[i] == 0)
      printf("0\n");
    else
      printf("%d\n", boss[i]);
    i++;
  }
  
  return (0);
}