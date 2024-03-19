#include <stdio.h>
 
int main (void) {
    char s[10];
    scanf("%s", s);

    int cnt = 0;

    for (int i = 0; i < 4; i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }

    if (0 < cnt) printf("Bad");
    else {
        printf("Good");
    }
    
    return 0;
}