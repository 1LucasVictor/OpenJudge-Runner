#include <stdio.h>
 
int main(void)
{
  int	n;
  int	numbers[110];
  int	bool = 1;
  
  scanf("%d", &n);
  int i = 0;
  while (i < n)
  {
    scanf("%d", &numbers[i]);
    i++;
  }
  i = 0;
  while (i < n)
  {
    if (numbers[i] % 2 == 0)
    {
      if (numbers[i] % 3 != 0 && numbers[i] % 5 != 0)
      {
		bool = 0;
      	break ;
      }
    }
    i++;
  }
  if (bool)
    printf("%s", "APPROVED");
  else
    printf("%s", "DENIED");
  return (0);
}