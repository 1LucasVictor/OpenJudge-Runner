#include <stdio.h>

int main() {
    int n;
    int i = 1;
    scanf("%d", &n);
    while (1) {
        int x = i;
        if (x % 3 == 0) {
            printf(" %d", i);
            if (++i <= n) {continue;}
            break;
        }
        while (1) {
            if (x % 10 == 3) {
                printf(" %d", i);
                break;
            }
            x /= 10;
            if (x) {continue;}
            break;
        }
        if (++i <= n) {continue;}
        else break;
    }
    printf("\n");
    return 0;
}


