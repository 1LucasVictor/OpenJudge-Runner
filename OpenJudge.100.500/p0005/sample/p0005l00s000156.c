#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {

    char buf[256];
    while( scanf("%s", buf) != EOF ) {

        int len = strlen(buf);
        int i;
        for ( i = 0 ; i < len / 2; ++ i ) {
            char c = buf[len - i - 1];
            buf[len - i - 1] = buf[i];
            buf[i] = c;
        }
        printf("%s\n", buf);
    }
    return 0;
}