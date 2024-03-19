#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
  char S[11];
  char T[11];

  scanf("%s", S);
  scanf("%s", T);

  char copy[11] = {'\0'};
  strncpy(copy, T, strlen(T) - 1);

  if (strcmp(copy, S) == 0)
    printf("Yes");
  else
    printf("No");

  return 0;
}
