#include <stdio.h>
#include <string.h>

int main()
{
    int ans = 0;
    int i = 0;
    char s[20000];    
    char t[20000];
    fgets(s,20000,stdin);
    fgets(t,20000,stdin);
    while(t[i] != '\0')
    {
        if (s[i] != t[i])
        {
            ans = ans + 1;
        }   
        i++; 
    }
    printf("%d",ans);
    return 0;
}