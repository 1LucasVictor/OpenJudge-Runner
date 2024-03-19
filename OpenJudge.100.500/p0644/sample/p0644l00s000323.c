#include <stdio.h>

int main(void) {
    char s1, s2, s3;
    int sum;
    int ret;

    ret = scanf("%c%c%c", &s1, &s2, &s3);

    sum = s1 + s2 + s3 - ('0' * 3);

    printf("%d\n", sum);

    return 0;
}