#include <stdio.h>

int main(void)
{
    char  str[3];
    int   i;
    int   result;

    result = scanf("%s", str);
    if (result != 1)
      return (0);
    i = 0;
    while (str[i] != '\0')
    {
      if (str[i] != 'A' && str[i] != 'B')
        return (0);
      i++;
    }
    i = 0;
    while (str[i + 1] != '\0')
    {
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
