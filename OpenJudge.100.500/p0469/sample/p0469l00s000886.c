#include "stdio.h"

int main(int argc, char const *argv[])
{
    int K, A, B, yes = 0;
    scanf("%d\n%d %d", &K, &A, &B);
    for(; A <= B; A++) {
        if (A % 7 == 0) {
            yes++;
            break;
        }
    }
    printf(yes ? "OK\n" : "NG\n");
    return 0;
}
