#include <stdio.h>

int	main(void)
{
  char	S[3];
  int	num;
  
  num = scanf("%s", S);
  if (num != 1)
    return (0);
  
  if (S[0] == S[1] && S[1] == S[2])
  {
        printf("No");
        return (0);
  }
  else
  {
      printf("Yes");
      return (0);
  }
  return (0);
}