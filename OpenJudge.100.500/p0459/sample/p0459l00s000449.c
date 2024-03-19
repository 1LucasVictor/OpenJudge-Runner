#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    int X, Y;

    scanf("%d %d", &X, &Y);

    int odA = Y - (2 * X);

    if( odA == 0 ) {
        printf("Yes\n");
        return 0;
    }
    if( (odA < 0) || ((odA % 2) != 0) ) {
        printf("No\n");
        return 0;
    }
    if( (odA / 2) <= X ) {
        printf("Yes\n");
        return 0;
    }

    printf("No\n");
    return 0;
}
