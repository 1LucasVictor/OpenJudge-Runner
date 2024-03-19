#include <stdio.h>

int main()
{
    char n[4];
    scanf("%s",n);

    int i;
    for (i = 0; i < 3; i++)
    {
        if(n[i] == '7')break;
    }
    if(i == 3)printf("No");
    else printf("Yes");
}
