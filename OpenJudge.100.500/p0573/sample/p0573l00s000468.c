#include<stdio.h>
int main(void) {
    char s[5];
    scanf("%s",s);
    int t = 0;
    if(s[0] == s[1]) {
        if(s[0] != s[2] && s[2] == s[3]) {
            t = 1;
        }
    }
    if(s[0] == s[2]) {
        if(s[0] != s[1] && s[1] == s[3]) {
            t = 1;
        }
    }
    if(s[0] == s[3]) {
        if(s[0] != s[1] && s[1] == s[2]) {
            t = 1;
        }
    }

    if(t == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}