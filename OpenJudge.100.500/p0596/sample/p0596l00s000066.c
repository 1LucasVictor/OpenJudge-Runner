#include <stdio.h>

int main()
{
    char s[100000];
    int n = scanf("%s",s);
    int n0 = 0, n1 = 0;
    for (int i = 0; i != strlen(s); ++i)
    {
        if (s[i] == '0')
            ++n0;
        else
            ++n1;
    }
    int answer = (n0 < n1 ? n0 : n1) * 2;
    printf("%d", answer);
    return 0;
}
