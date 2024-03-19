#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int x;
    scanf("%d", &x);

    printf("%d\n", x/2+x%2);
    // printf("%d\n", atoi(argv[1])/x + atoi(argv[1])%x);

    return 0;
}