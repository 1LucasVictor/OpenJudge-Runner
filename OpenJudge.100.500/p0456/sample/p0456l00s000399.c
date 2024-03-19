#include <stdio.h>
#include<string.h>

int main(void)
{
    char t[200001], s[200001];
    int i,sizet,count = 0;
    scanf("%s", t);
    scanf("%s", s);

    sizet = strlen(t);

    for (i = 0; i < sizet; i++)
    {
        if (t[i] != s[i])
        {
            count++;
        
        }

    }
    printf("%d\n", count);
    return 0;
}