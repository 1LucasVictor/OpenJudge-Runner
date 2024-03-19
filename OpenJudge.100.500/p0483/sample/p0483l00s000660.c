#include <stdio.h>

int main() {
    int N, first, second, third;
    scanf("%d\n", &N);

    if ((first = N % 10) == 7) {
        printf("Yes\n");
        return 0;
    }
    if ((second = (((N-first)/10) % 10) == 7)) {
        printf("Yes\n");
        return 0;
    }
    if ((second = (((N-first-second)/10) % 10) == 7)) {
        printf("Yes\n");
        return 0;
    }

    printf("No\n");
    return 0;
}