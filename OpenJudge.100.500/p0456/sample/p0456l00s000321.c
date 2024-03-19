#include <stdio.h>
#define N 200005

char s[N] = {0}, t[N] = {0}, *p, *q;
int main()
{
    int cnt = 0;
    scanf("%s%s", s, t);
    p = s; q = t;
    while(*p && *q)
        if(*p++ != *q++) 
            cnt++;
    printf("%d\n", cnt);

    return 0;
}