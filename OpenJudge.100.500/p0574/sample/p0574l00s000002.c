#include<stdio.h>

int main()
{
    char s[6];
    
    scanf("%s",s);
    if(s[0] == s[1] || s[1] == s[2] || s[2] == s[3])
    {
        printf("Bad\n");
    }
    else
    {
        printf("Good\n");
    }
    
    return 0;
}
