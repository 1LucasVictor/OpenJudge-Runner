#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int X;

    scanf("%d", &X);
    
    if( X >= 30 ) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
