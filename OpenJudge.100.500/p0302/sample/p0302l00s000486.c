
#include <stdio.h>
#include <string.h>

char HA[1<<21], T[256];

int main() {
    unsigned int n, s, t;
    char c;
    T['A'] = 4;
    T['C'] = 3;
    T['G'] = 2;
    T['T'] = 1;
    scanf("%d", &n);
    getchar();
    while (n--) {
        s = 0;
        t = 1;
        int flag = ( c = getchar() ) == 'i';
        while ( ( c = getchar() ) != ' ' );
        while ( ( c = T[getchar()] ) != 0 ) {
            s += c * t;
            t *= 4;
        }
        if ( flag ) {
            HA[s] = 1;
        } else {
            puts( HA[s] ? "yes" : "no" );
        }
    }
    return 0;
}