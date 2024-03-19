//Atcoder Biginner Contest 172 A問題

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    int answer;

    answer = n + (n * n) + (n * n * n);

    printf("%d", answer);

    return 0;
}
