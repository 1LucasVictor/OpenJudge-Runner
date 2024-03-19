#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n;

    scanf("%d", &n);

    if ( n%10 == 7 || (n%100)/10 == 7 || n/100 == 7 )
        printf("Yes\n");
    else
        printf("No\n");

    return EXIT_SUCCESS;
}
