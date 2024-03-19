#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char s[1200];
    
    for (;;) {
        scanf("%s\n", s);
        if (s[0] == '0')
            break;
        char *p = s;
        int ans = 0;
        do {
            ans += *p - '0';        
        } while (*(++p));
        printf("%d\n", ans);
    }

    return 0;
}

