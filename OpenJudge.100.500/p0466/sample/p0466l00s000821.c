#include <stdio.h>
#include <string.h>

int main() {
    char s[12], t[12];
    scanf("%s", s);
    scanf("%s", t);
    int l = strlen(s);
    printf(strlen(t) - l != 1 || strncmp(s, t, l) ? "No" : "Yes");
    return 0;
}
