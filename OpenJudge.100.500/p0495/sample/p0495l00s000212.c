#include<stdio.h>
int main ()
{
    int a=0,b=0,i;
    char s[4];
    scanf("%s",s);
    for (i=0; i<4; i++)
    {
        if (s[i]=='A')
        {
            a++;
        }
        else if (s[i]=='B')
        {
            b++;
        }
    }
    if (a>=1 && b>=1)
    {
        printf ("Yes\n");
    }
    else
    {
        printf ("No\n");
    }
    return 0;
}
