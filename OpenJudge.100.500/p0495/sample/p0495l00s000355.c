#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char s[4];

    scanf("%s", s);

    if ( s[0] == s[1] && s[1] == s[2] )
        printf("No\n");
    else
        printf("Yes\n");

    return EXIT_SUCCESS;
}
