#include <stdio.h>

int main(void) {
    int n, i, j, judge = 0;

    scanf("%d", &n);

    for (i = 1; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (judge == 0 && n == i*j) {
                printf("Yes\n");
                judge = 1;
                break;
            }
        }
    }
    if (judge == 0) {
        printf("No\n");
    }

    return 0;
}
