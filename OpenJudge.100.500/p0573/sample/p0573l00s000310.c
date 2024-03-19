#include <stdio.h>

int main(void)
{
    char s[5];
    int cnt[4] = {0};
    scanf("%s", s);
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (s[i] == s[j])
            {
                cnt[i]++;
                cnt[j]++;
            }
            
    for (int i = 0; i < 3; i++)
        if (cnt[i] != cnt[i + 1] || cnt[i] != 1 || cnt[3] != 1)
        {
            puts("No");
            return 0;
        }
    puts("Yes");
    return 0;
}