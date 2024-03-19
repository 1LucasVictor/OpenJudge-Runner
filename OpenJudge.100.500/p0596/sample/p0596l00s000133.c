#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char s[100002];
    s[0] = 'a';
    scanf("%s", &s[1]);

    char s_unified[100002];
    s_unified[0] = 'a';
    int ans=0;
    int s_len = strlen(&s[1]);
    int tail=0;
    for ( int i=1; i<=s_len; i++ ) {
        if ( tail == 0 || s[i] == s_unified[tail] ) {
            tail++;
            s_unified[tail] = s[i];
        }
        else
        {
            ans += 2;
            tail--;
        }
    }

    printf("%d\n", ans);
    return EXIT_SUCCESS;
}
