#include<stdio.h>
#include<math.h>
#include<string.h>

    int main(void) {
        int i;
        char s[10];
        char t[11];
        
        scanf("%s", s);
        scanf("%s", t);
        for (i = 0; s[i] != '\0'; i++) {
        }
        if (!strcmp(s, t)) {
            printf("No");
        }
        else {
            printf("Yes");
        }
        return 0;
    }