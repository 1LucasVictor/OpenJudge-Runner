#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[3];
    scanf("%s", s);
    int k = 0;
    for (int i = 0; i < 3 ; i++)
    {
        if (s[i] == '1')
        {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}