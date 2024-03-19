#include <stdio.h>
#include <math.h>

int main(void)
{
    char S[128];
    scanf("%s",&S);
    int cnt[26];
    for(int i=0;i<26;i++) cnt[i] = 0;
    for(int i=0;i<4;i++) cnt[S[i] - 'A']++;
    for(int i=0;i<26;i++)
    {
        if (cnt[i] != 0 && cnt[i] != 2)
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
}
