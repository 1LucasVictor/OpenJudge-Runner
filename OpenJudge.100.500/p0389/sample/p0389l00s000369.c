#include <stdio.h>
#include <string.h>

int main()
{
    char str1[205], str2[205];
    char *f=str1, *b=str2, *p, i;
    int m, h, len;
    while(scanf(" %s", f)) {
        if(strcmp(f, "-")==0) break;
        for(len=0; f[len]; len++);
        scanf("%d", &m);
        for(i=0; i<m; i++) {
            scanf("%d", &h);
            p=f, f=b, b=p;
            memcpy(f, b+h, len-h);
            memcpy(f+len-h, b, h);
            f[len]='\0';
        }
        puts(f);
    }
    return 0;
}