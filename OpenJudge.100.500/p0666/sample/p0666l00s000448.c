#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, A, B;
    scanf("%d%d%d", &X, &A, &B);
    if (A >= B) printf("delicious\n");
    else if (X + A >= B) printf("safe\n");
    else printf("dangerous\n");

    return 0;
}