#include <stdio.h>

int main(void)
{
    char s[4];
    scanf("%s", s);
    int n = 0;
    if (s[0] == '1')
        n++;
    if (s[1] == '1')
        n++;
    if (s[2] == '1')
        n++;
    printf("%d\n", n);
    return 0;
}