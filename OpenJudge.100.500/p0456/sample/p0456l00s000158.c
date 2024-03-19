#include <stdio.h>
int main(void)
{
    int i, j;
    char str[1000];
    char str2[1000];
    
    scanf("%s", str);
    scanf("%s", str2);
    
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
    printf("%d", j);
}
