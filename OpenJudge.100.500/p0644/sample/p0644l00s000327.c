#include <stdio.h>

int main(void)
{
        char s[5];
        scanf("%s", s);

        int i, ans = 0; 
        for(i = 0; i < 3; i++) {
                if (s[i] == '1')
                        ans++;
        }

        printf("%d\n", ans);
        return 0;
}
