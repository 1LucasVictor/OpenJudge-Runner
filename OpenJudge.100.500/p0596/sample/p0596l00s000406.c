#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s",s);

    int len = strlen(s),count = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i] == '0')count++;
    }

    if(count > len - count)
    {
        printf("%d",(len - count) * 2);
    }
    else
    {
        printf("%d",count * 2);
    }
    
}