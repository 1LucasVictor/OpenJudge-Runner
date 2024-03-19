#include <stdio.h>
int main()
{
  int i = 0;
  char S[4];
  scanf("%s",S);
  while (S[i])
  {
    if (S[i] != 'A' && S[i] != 'B')
    {
      printf("No");
      return (0);
    }
    i++;
  }
  if (S[0] == S[1] && S[1] == S[2])
  {
    printf("No");
    return (0);
  }
  printf("Yes");
  return (0);
}