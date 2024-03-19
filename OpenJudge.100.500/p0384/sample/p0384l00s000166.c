#include <stdio.h>
int main(void) {
    int c;
 
    while (1) {
        c = getchar();
        if (c == EOF)
            break;
        if ('A' <= c && c <= 'Z')
            putchar(c + 0x20);
        else if ('a' <= c && c <= 'z')
            putchar(c - 0x20);
        else
            putchar(c);
    }
    return 0;
}
