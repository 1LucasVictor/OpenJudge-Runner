#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    if(ceil((double)(a + b) / 2) == floor((double)(a + b) / 2)) {
        printf("%d\n", (a + b) / 2);
    } else {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
