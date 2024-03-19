#include <stdio.h>

int main()
{
    char s[5];
    scanf("%s",s);

    int i;
    for (i = 0; i < 3; i++)
    {
        if(s[i] == s[i + 1])
        {
            break;
        }
    }
    if (i!= 3)
    {
        printf("Bad");
    }
    else
    {
        printf("Good");
    }
    
}