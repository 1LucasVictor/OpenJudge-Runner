#include <stdio.h>
#include <string.h>

int main() {
    char s[1201];
    int i, n = 0;

    while(scanf("%c", &s[n]) != EOF) {
        n++;
    }

    for (i = 0; i <= n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32; 
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    //printf("\n");

    return 0;
}

