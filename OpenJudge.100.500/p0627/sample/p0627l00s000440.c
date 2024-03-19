#include <stdio.h>

int main () {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int sub = A - B;
    int mul = A * B;

    printf("%d\n", sum > sub && sum > mul ? sum : sub > mul ? sub : mul);
    return 0;
}
