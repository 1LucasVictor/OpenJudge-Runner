#include <stdio.h>

int deleteCube(char *s) {
    int out = 0, oldout = 0, i;
    while (1) {
        int old = 0, oldi = 0;
        for (i=0; s[i] != '\0' ;i++) {
            if ((old == '0' && s[i] == '1') || (old == '1' && s[i] == '0')) {
                s[oldi] = s[i] = 1;
                old = 1;
                out+=2;
                break;
            }
            if (s[i] != 1) {
                oldi = i;
                old = s[i];
            }
        }
        if (oldout == out) break;
        oldout = out;
    }
    return out;
}

int main() {
    char s[100001];
    scanf("%s", s);
    printf("%d\n", deleteCube(s));
    return 0;
}