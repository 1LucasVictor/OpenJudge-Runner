#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char s[1024];
    int q;
    int i;
 
    scanf("%s", s);
    scanf("%d", &q);
    while (q--){
        char query[16];
        int a, b;
 
        scanf("%s %d %d", query, &a, &b);
        if (!strcmp(query, "print")){
            for (i = a; i <= b; ++i) putchar(s[i]);
            puts("");
        }
        else if (!strcmp(query, "reverse")){
            for (i = 0; i <= (b - a) / 2; ++i){
                char tmp = s[a + i];
                s[a + i] = s[b - i];
                s[b - i] = tmp;
            }
        }
        else {
            char p[1024];
 
            scanf("%s", p);
            strncpy(s + a, p, b - a + 1);
        }
    }
 
    return 0;
}