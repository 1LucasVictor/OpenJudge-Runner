#include <stdio.h>

int main(void) {
    int x, y, z;
    for(scanf("%*d"); ~scanf("%d %d %d", &x, &y, &z);) {
        printf("%s\n", x * x + y * y == z * z ? "YES" : "NO");
    }
    return 0;
}