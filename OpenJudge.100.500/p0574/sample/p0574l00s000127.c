#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char s[4];
    int i;
    bool flag = true;

    fscanf(stdin, "%s\n", s);

    for (i=1; i<4; i++) {
        if (s[i-1] == s[i]) flag = false;
    }
    if(flag) printf("Good\n");
    else printf("Bad\n");

    return 0;
}