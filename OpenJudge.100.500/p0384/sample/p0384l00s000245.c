#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[999999];
    int i, x;
    x = 0;
    while(scanf("%c", &c[x]))
    {
        if(c[x] == '\n')
        {
            break;
        }
        x++;
    }
    for(i = 0 ; i <= x ; i++)
    {
        if(c[i] >= 65 && c[i] <= 90)
        {
            c[i] += 32;
        }
        else if(c[i] >= 97 && c[i] <= 122)
        {
            c[i] -= 32;
        }
    }
    for(i = 0 ; i <= x ; i++)
    {
        printf("%c", c[i]);
    }
    return 0;
}

