#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    char s[5];
    scanf("%s", s);
    int i;
    for(i=0; i<3; i++)
    {
        if(strncmp(&s[i], &s[i+1], 1)==0)
        {
            printf("Bad");
            return 0;
        }
    }
    printf("Good");
    return 0;
}