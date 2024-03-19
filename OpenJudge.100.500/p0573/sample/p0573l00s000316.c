#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char s[4];
    scanf("%s", s);
    
    if(strncmp(&s[0], &s[1], 1)==0 && strncmp(&s[1], &s[2], 1)==0 && strncmp(&s[2], &s[3], 1)==0)
    {
        printf("No");
        return 0;
    }
    if(strncmp(&s[0], &s[1], 1)==0 && strncmp(&s[2], &s[3], 1)==0)
    {
        printf("Yes");
        return 0;
    }

    if(strncmp(&s[0], &s[2], 1)==0 && strncmp(&s[1], &s[3], 1)==0)
    {
        printf("Yes");
        return 0;
    }

    if(strncmp(&s[0], &s[3], 1)==0 && strncmp(&s[1], &s[2], 1)==0)
    {
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;
    
}