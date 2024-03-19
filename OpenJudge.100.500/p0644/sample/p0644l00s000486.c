#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char s[4];
    scanf("%s", s);
    int c = 0;
    for (char *p = s; *p; p++) {
        if (*p == '1') c++;
    }
    printf("%d\n", c);
    return EXIT_SUCCESS;
}
