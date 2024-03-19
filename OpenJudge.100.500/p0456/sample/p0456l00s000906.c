#include <stdio.h>
#include <string.h>
int main()
{
    char s[200000], t[200000];
    int n, i, cnt=0;
    scanf("%s%s", s, t);
    n=strlen(s);
    for(i=0; i<n; i++) {
        if(s[i]!=t[i])
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
