#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if(a < 10 && a >= 0 && b >= 0 && b <10) {
        printf("%d\n", a * b);
    } else {
        printf("-1\n");
    }

    return 0;
}
