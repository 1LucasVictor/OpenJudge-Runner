#include<stdio.h>

int main(void) {
    int i, ans = 0;
    char s[4];

    scanf("%s", s);
    for(i = 0; i < 3; i++) {
        if(s[i] == '1') {
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}
