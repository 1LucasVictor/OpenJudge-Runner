#include <stdio.h>

int main(void)
{
    int n, a, b, c, d, max;
    char s[20001];

    scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
    scanf("%s", &s);

    if(c > d){
        max = c;
    }else{
        max = d;
    }


    for (int i = b; i < max - 1; i++)
    {
        if (s[i] == '#' && s[i + 1] == '#')
        {
            printf("%s\n", "No");
            return 0;
        }
    }
    if (c > d)
    {
        for (int i = b - 2; i < max - 2; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                printf("%s\n", "Yes");
                return 0;
            }
        }

        printf("%s\n", "No");
        return 0;
    }

    printf("%s\n", "Yes");
    return 0;
}