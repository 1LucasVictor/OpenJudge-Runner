#include <stdio.h>

char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void)
{
    int i;
    char c;

    while(1) {
        scanf("%c", &c);
        if(c == '\n') break;

        for(i=0;i<26;i++) {
            if(c == lower[i]) c = upper[i];
            else if(c == upper[i]) c = lower[i];
        }
        printf("%c", c);
    }

    putchar('\n');

    return 0;
}