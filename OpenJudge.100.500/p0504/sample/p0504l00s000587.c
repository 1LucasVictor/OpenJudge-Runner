#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int h, a;
    scanf("%d %d", &h, &a);
    printf("%d", h / a + (h % a == 0 ? 0 : 1));
    return 0;
}