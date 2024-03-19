#include <stdio.h>

void call(int n) {
    int i;
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 10 == 3 || (i > 30 && (i / 10) % 3 == 0)) {
            printf(" %d", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    call(n);
    return 0;
}