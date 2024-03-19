#include <stdio.h>
#include <string.h>

int main()
{
    char s[5];
    int i;

    scanf( "%s", s );
    
    

    if( strlen(s) != 4 ) //文字列の長さ判定
        puts("No");
    else 
    {
        for (i = 0; i <= 3; i++) //大文字判定
        {
            if (s[0] >= 'A' && s[0] <= 'Z')
                continue;
            else
            {
                puts("No");
                return 0;
            }
        }
        if (s[0] == s[1] )
        {
            if (s[2] == s[3] && s[0] != s[2] )
                puts("Yes");
        }
        else if (s[0] == s[2] )
        {
            if (s[1] == s[3] )
                puts("Yes");
        }
        else if (s[0] == s[3] )
        {
            if (s[1] == s[2] && s[1] != s[0] )
                puts("Yes");
        }
        else
            puts("No");
    }

    
    
    return 0;
}