#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10];
    char t[11];
    scanf("%s", s);
    scanf("%s", t);
    for(int i = 0; i < strlen(s); i++) {
        if(strncmp(s, t, i) != 0) {
            puts("No");
            return 1;
        }
    }
    puts("Yes");
    return 0;
}