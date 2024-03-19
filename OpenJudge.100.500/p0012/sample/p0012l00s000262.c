#include <stdio.h>

int main(void)
{
    int x, s[11] = {0};

    while (scanf("%d", &x) != EOF) {
        if (x == 0)
            printf("%d\n", s[s[0]--]);
        else
            s[++s[0]] = x;
    }

    return 0;
}