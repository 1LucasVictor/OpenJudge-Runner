#include<stdio.h>
int main()
{
    char s[5];
    int ans = 0, i;
    scanf("%s", s);
    for (i = 0; i < 3; i++)
        if (s[i] == '1')
            ans++;
    printf("%d\n", ans);
    return 0;
}