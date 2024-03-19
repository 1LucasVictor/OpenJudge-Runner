#include <stdio.h>

int main()
{
    char s[4];
    scanf("%s",s);

    int i;
    for (i = 0; i < 2; i++)
    {
        if(s[i] != s[i + 1])break;
    }
    if(i == 2)printf("No");
    else printf("Yes");
}
