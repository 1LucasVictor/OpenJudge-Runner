#include <stdio.h>

int main(void)
{
    char s[4];
    int i,a = 0,b = 0;
    scanf("%s", &s);

    for (i = 0; i < 3; i++)
    {
        if (s[i] == 'A') a++;
        else b++;
    }

    if (a == 2 && b == 1 || a == 1 && b == 2) printf("Yes");
    else printf("No");
    
    return 0;
}