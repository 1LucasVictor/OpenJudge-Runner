#include <stdio.h>

int main() {

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int res;

    res = a * b;

    if (res % 2)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
}