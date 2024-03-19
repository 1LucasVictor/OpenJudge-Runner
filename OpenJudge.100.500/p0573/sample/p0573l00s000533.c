#include<stdio.h>
int main()
{
    char s[4];
    int i, j = 0, k,l=0;
    scanf("%s",s);
    for(i=1; i<=3; i++)
    {
        if(s[0] == s[i])
        {
            j = 1;
            k = i;
        }
    }
    if(j == 1)
    {
        if(k == 1)
        {
            if(s[2] == s[3])
                l = 1;
        }
        else if(k == 2)
        {

            if(s[1] == s[3])
                l = 1;
        }
        else if(k == 3)
        {

            if(s[1] == s[2])
                l = 1;
        }

    }
    if(j == 1 && l == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
