#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[200010];
    char t[200010];

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len_s=strlen(s);

    int count=0;
    for (int i = 0; i < len_s; i++)
    {
        if(s[i] != t[i])
            count++;
    }
    printf("%d",count);
}