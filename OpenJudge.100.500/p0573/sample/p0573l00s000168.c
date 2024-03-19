#include<stdio.h>

int main(void)
{
    char s[4];
    char judge1;
    char judge2;
    int ans1 = 0;
    int ans2 = 0;
    
    int i;

    scanf("%s\n", s );

    judge1 = s[0];
    if( s[0] != s[1] )
    {
        judge2 = s[1];
    }
    else if( s[1] != s[2] )
    {
        judge2 = s[2];
    }
    else if( s[2] != s[3])
    {
        judge2 = s[3];
    }
    else
    {
        judge2 = 0;
    }
    
    
    for( i = 0; i < 4; i++ )
    {
        if( s[i] == judge1 )
        {
            ans1 += 1;
        }
        if( s[i] == judge2 )
        {
            ans2 += 1;
        }
    }

    if ( (ans1 == 2) && (ans2 == 2) )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}
