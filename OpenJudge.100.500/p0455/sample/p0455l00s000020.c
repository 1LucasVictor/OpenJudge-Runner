#include <stdio.h>

int main(void) {
    int i;
    scanf("%d", &i);
    int x = i + i*i + i*i*i;
    printf("%d\n", x);

    return 0;
}
