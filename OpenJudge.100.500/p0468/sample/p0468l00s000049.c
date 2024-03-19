#include <stdio.h>
#include <math.h>

int main (void)
{
    char s[4];

    scanf("%s", s);

    if (s[1] == 'B') {
        puts("ARC");
    } else {
        puts("ABC");
    }

    return 0;
}

