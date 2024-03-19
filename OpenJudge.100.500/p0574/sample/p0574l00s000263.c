#include <stdio.h>

int main()
{
    char key[5],flag = 0,i;
    
    scanf("%s",key);

    for (i = 1; i < 4; i++)
    {
        if(key[i] == key[i - 1])
        {
            break;
        }
    }
    if (i == 4)
    {
        printf("Good");
    }
    else
    {
        printf("Bad");
    }
    
}