#include <stdio.h>
#include <string.h>
#define m 200000
int main()
{
    char s[m], t[m];
    int n, i, cnt=0;
    scanf("%s%s", &s, &t);
    n=strlen(s);
    for(i=0; i<n; i++) {
        if(s[i]!=t[i])
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
