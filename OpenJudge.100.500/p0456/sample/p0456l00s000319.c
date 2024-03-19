#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char s[200000];
    char t[200000];
    int s_len;
    int t_len;
    int i;
    int num;
    if ((s_len = scanf("%s", s)) < 0)
    {
        fprintf(stderr, "error\n");
        return 0;
    }
    if ((t_len = scanf("%s", t)) < 0)
    {
        fprintf(stderr, "error\n");
        return 0;
    }
    if (t_len != s_len)
    {
        return 0;
    }
    i = 0;
    num = 0;
    while (t[i])
    {
        if (t[i] != s[i])
            num++;
        i++;
    }
    printf("%d", num);
    return 0;
}