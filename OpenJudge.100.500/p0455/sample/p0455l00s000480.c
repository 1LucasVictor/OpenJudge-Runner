#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,a = 0;
    char buf[30];

    fgets(buf, sizeof(buf), stdin);

    n = atoi(buf);

    if (n>=1 & n<=10)

        a = n + (n*n) + (n*n*n);

        printf("%d\n", a);
}