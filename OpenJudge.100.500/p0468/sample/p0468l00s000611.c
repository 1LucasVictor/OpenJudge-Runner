#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[5];
    scanf("%s", s);
    if (s[1] == 'B')
        printf("ARC\n");
    else 
        printf("ABC\n");
}