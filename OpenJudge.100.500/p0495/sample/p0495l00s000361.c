#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char  *str;
    int   i;
    int   result; 

    str = (char *)malloc(sizeof(char) * 10000);
    result = scanf("%s", str);
    i = 0;
    while (str[i] != '\0')
      i++;
    if (i != 3)
    {
      printf("No");
      return (0);
    }
    i = 0;
    while (str[i + 1] != '\0')
    {
      if (str[i] != 'A' && str[i] != 'B')
      {
        printf("No");
        return (0);
      }
      if (str[i] != str[i + 1])
      {
        printf("Yes");
        return (0);
      }
      i++;
    }
    printf("No");
    return (0);
}
