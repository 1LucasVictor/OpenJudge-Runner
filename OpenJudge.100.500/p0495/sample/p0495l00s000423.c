#include <stdio.h>
 
int main(void)
{
    char  str[3];
    int   i;
    int   k;
    int   result;

    result = scanf("%s", str);
    i = 0;
    while (str[i])
    {
      if (str[i] != 'A' && str[i] != 'B')
      {
        printf("No");
        return (0);
      }
      i++;
    }
    if (i != 3)
    {
      printf("No");
      return (0);
    }
    k = 0;
    while (str[k + 1] != '\0')
    {
      if (str[k] != str[k + 1])
      {
        printf("Yes");
        return (0);
      }
      k++;
    }
    printf("No");
    return (0);
}
