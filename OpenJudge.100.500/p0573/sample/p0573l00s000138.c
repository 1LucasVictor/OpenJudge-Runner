#include <stdio.h>

int main()
{
    char s[5];
    int i;

    scanf( "%s", s );
    
    for( i = 0; i <= 3; i++ )
    {
        if (s[0] >= 'A' && s[0] <= 'Z') continue;
        else puts( "No" );
    }
    if (s[0] == s[1] && s[2] == s[3])
        puts("Yes");
    else if (s[0] == s[2] && s[1] == s[3])
        puts("Yes");
    else if (s[0] == s[3] && s[1] == s[2])
        puts("Yes");
    else
        puts( "No" );
    
    return 0;
}