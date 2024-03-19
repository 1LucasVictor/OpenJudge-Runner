#include <stdio.h>

int main(void)
{
    char S[4];
  
    scanf("%s",S);
    if (S[0] == 'A' && S[1] == 'A' && S[2] == 'A')
      printf("No\n");
    else if (S[0] == 'B' && S[1] == 'B' && S[2] == 'B')
      printf("No\n");
    else
      printf("Yes\n");
    return (0);
}