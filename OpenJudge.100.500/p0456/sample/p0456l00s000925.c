#include <stdio.h>
int main(void)
{
    // Your code here!
    int i, j;
    char str[1000];
    char str2[1000];
    
    scanf("%s%s", str, str2);
    
    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != str2[i])
        {
            str[i] = str2[i];
            j++;
        }
        i++;
    }
  if (scanf("%s%s", str, str2) < 2)
        printf("%d", j);
}
