#include <stdio.h>

int main(void) {
    int n, v, ary[4][13] = {};
    char s;
    for(scanf("%d", &n); n--; ) {
        scanf("%1s%d", &s, &v);
        ary[s == 'S' ? 0 : s == 'H' ? 1 : s == 'C' ? 2 : 3][~-v]++;
    }
    for(v = 0; v < 52; v++) {
        if(!ary[v / 13][v % 13]) {
            printf("%c %d\n", v / 13 == 0 ? 'S' : v / 13 == 1 ? 'H' : v / 13 == 2 ? 'C' : 'D', v % 13 + 1);
        }
    }
    return 0;
}