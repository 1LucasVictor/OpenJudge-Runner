#include <stdio.h>

int main()
{
    int cards[52];
    int i;
    int n;
    char c;
    int d;
    for(i = 0; i < 52; i++) {
        cards[i] = 0;
    }
    scanf("%d%*c", &n);
    for(i = 0; i < n; i++) {
        scanf("%c %d%*c", &c, &d);
        if(c == 'S') {
            cards[d-1] = 1;
        }
        if(c == 'H') {
            cards[d-1+13] = 1;
        }
        if(c == 'C') {
            cards[d-1+26] = 1;
        }
        if(c == 'D') {
            cards[d-1+39] = 1;
        }
    }
    for(i = 0; i < 52; i++) {
        if(cards[i] == 0) {
            if(i >= 0 && i < 13) {
                putchar('S');
            }
            if(i >= 13 && i < 26) {
                putchar('H');
            }
            if(i >= 26 && i < 39) {
                putchar('C');
            }
            if(i >= 39 && i < 52) {
                putchar('D');
            }
            printf(" %d\n", (i%13)+1);
        }
    }
    return 0;
}
