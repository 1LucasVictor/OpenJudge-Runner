#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    int n = strlen(s);
    int i, r, b;
    r = b = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
            r++;
        else
            b++;
    }
    if (r < b)
        printf("%d\n", 2 * r);
    else
        printf("%d\n", 2 * b);
    return 0;
}