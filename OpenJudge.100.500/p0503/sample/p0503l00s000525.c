#include <stdio.h>

int		main(void)
{
  int	numbers[210000];
  int	n;
  int	bool = 1;
  int	ex = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &numbers[i]);
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (numbers[i] == numbers[j])
      {
        ex = 1;
      	bool = 0;
      	break ;
      }
    }
    if (ex)
      break;
  }
  if (bool)
    printf("%s", "YES");
  else
    printf("%s", "NO");
  return (0);
}     