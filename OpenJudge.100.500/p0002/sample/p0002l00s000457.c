#include <stdio.h>

int main(void)
{
    int N, s[3], id;

    scanf("%d", &N);

    while(N-- > 0)
    {
        scanf("%d %d %d", &s[0], &s[1], &s[2]);
        id = s[0] < s[1] ? (s[1] < s[2] ? 2 : 1) : (s[0] < s[2] ? 2 : 0);

        int i, sum = 0;
        for(i = 0; i < 3; ++i)
        {
            if(i != id)
            {
                sum += (s[i] * s[i]);
            }
        }

        printf("%s\n", (sum == (s[id] * s[id]) ? "YES" : "NO"));
    }

    return 0;
}