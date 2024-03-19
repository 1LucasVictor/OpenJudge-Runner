#include <stdio.h>

int deleteCube(char *s) {
    int out = 0, oldout, i;
    do {
        oldout = out;
        int old = 0, oldi = 0;
        for (i=0; s[i] != '\0' ;i++) {
            if ((old == '0' && s[i] == '1') || (old == '1' && s[i] == '0')) {
                s[oldi] = s[i] = 1;
                old = 1;
                out+=2;
            }
            if (s[i] != 1) {
                oldi = i;
                old = s[i];
            }
        }
    } while (oldout != out);
    return out;
}

int main() {
    char s[100001];
    scanf("%s", s);
    printf("%d\n", deleteCube(s));
    return 0;
}