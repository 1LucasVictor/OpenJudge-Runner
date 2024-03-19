#include <stdio.h>

int main()
{
    char str[3];
    scanf("%s", str);

    if (str[0] == 'A' && str[1] == 'A' && str[2] == 'A')
    {
        printf("No\n");
        return (0);
    }
    else if (str[0] == 'B' && str[1] == 'B' && str[2] == 'B')
    {
        printf("No\n");
        return (0);
    }
    else 
    {
        printf("Yes\n");
        return (0);
    }
    return (0);
}