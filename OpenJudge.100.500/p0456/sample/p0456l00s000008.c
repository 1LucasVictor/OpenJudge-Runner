#include <stdio.h>
int main(void){
    int i, ii, iii, n, x, y, a[10000], ans = 0;
    char s[1000000], t[1000000];
    scanf("%s%s", s, t);
    for (i = 0; s[i] > 0; i++)
    {
        if (s[i] - t[i])
            ans++;
    }
    printf("%d", ans);
    
}
