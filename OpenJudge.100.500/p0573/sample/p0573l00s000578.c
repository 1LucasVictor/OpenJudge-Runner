#include <stdio.h>

int main(void) {
    char s[4];
    char t;
    int ct = 0;


    scanf("%s", s);

    for (int k = 0; k < 3; k++) {
        t = s[k];
        for (int i = k+1; i < 4; i++) {
            if (t == s[i]) {
                ct++;
            }
        }
    }
    if (ct == 2) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;

}