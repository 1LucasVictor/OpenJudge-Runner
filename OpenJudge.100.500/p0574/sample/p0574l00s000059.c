#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void)
{
    char s[5];
    scanf("%s", s);
    rep(i, 3)
    {
        if (s[i] == s[i + 1])
        {
            puts("Bad");
            return 0;
        }
    }

    puts("Good");
    return 0;
}