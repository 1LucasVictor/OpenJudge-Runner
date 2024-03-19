#include<stdio.h>
int main()
{
    int c=0,i;
    char s[4];
    scanf ("%s",s);
    for (i=0;i<4;i++)
    {
        if (s[i]=='7')
        {
            c++;
        }
    }
    if (c>0)
    {
        printf ("Yes\n");
    }
    else
    {
        printf ("No\n");
    }
    return 0;
}
