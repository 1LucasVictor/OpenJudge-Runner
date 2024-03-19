#include <math.h>
#include <stdio.h>
#include <string.h>
char s[4];
int main(void) {
    scanf("%s", s);
    if (s[1] == 'R') {
        printf("ABC\n");
    } else {
        printf("ARC\n");
    }
}