#include <stdio.h>

int main(void) {
    unsigned int n;
    scanf("%d", &n);
    for (; n != 0; n /= 10) {
        if (n % 10 == 7) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}