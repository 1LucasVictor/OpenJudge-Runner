#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char buf[2][201];
    char *p1 = buf[0];
    char *p2 = buf[1];

    while (scanf("%s\n", p1) && strcmp(p1, "-")) {
        int m;
        scanf("%d\n", &m);

        while (m--) {
            int h;  
            scanf("%d\n", &h);

            // shuffle
            int rest = strlen(p1) - h;
            memcpy(p2, p1 + h, rest);
            memcpy(p2 + rest, p1, h);
            *(p2 + h + rest) = '\0';

            // swap buffer
            char *t = p1;
            p1 = p2;
            p2 = t;
        }   
        puts(p1);
    }
}
