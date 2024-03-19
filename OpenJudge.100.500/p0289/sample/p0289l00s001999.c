#include <stdio.h>
int main(void) {
    int a, b, i, c, d, e, f, g;
    e = 1;
    
    

    scanf("%d %d", &a, &b);
    if(a > b) {
        f = a;
        a = b;
        b = f;
    }
    g = b % a;

    for(i = 1; i <= b; i++) {
        if(g % i == 0) {
            c = i;
         }
        if(b % i == 0) {
            d = i;
        }
        if(c == d) {
            e = c;
        }
    }

    printf("%d\n", e);
    return 0;
}