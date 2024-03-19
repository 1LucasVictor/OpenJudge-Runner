#include <stdio.h>
int main(void) {
    int n, m;
    char buf[1000];

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d\n", &n, &m);

    if (n % 2 == 1 && m % 2 == 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}