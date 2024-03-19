#include <stdio.h>
#include <string.h>
int main()
{
    char s[100000], t[100000];
    int count;
    scanf("%s", s);
    scanf("%s", t);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
