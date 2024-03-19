#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[15], t[15];
    scanf("%s %s", s, t);
    bool ok = 1;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != t[i]) ok = 0;
    }
    if (ok) printf("Yes\n");
    else printf("No\n");
}