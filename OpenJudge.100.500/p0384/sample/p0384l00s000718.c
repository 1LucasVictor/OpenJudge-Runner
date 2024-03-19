#include <stdio.h>
static char cs[256];    // chars
void init(void) {
    int i;
    for (i = 0; i < 256; ++i) {
        cs[i] = i;
        if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z') cs[i] ^= 0x20;
    }
}
int main(void) {
    int c;
    init();
    while ((c = getchar()) != EOF) putchar(cs[c]);
    return 0;
}