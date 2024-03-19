#include <stdio.h>

int main (void) {
    char s[1200];

    scanf ("%[^\n]", s);

    for (int i=0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] += 'A' - 'a';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] -= 'A' - 'a';
        } else continue;
    }

    printf ("%s\n", s);

    return 0;
}
