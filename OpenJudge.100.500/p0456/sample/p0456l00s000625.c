#include <stdio.h>
#include <string.h>

int main()
{
    char s[2*100000], t[2*100000];

    scanf("%s", s);
    scanf("%s", t);
    int c = 0;
    int l = strlen(s);
    for(int i=0; i < l; i++)
    {
        if(s[i] != t[i])
        c++;
    }
    printf("%d\n", c);
    return 0;
}