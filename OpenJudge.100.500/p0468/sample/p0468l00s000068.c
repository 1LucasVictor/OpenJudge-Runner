#include <stdio.h>
#include <string.h>

int main() {
    char s[3];
    scanf("%s", s);
    printf(strcmp(s, "ABC") ? "ABC" : "ARC");
    return 0;
}
