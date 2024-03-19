#include <stdio.h>

int isRight(int a, int b, int c)
{
    if (a * a == b * b + c * c) return 1;
    if (b * b == c * c + a * a) return 1;
    if (c * c == a * a + b * b) return 1;
    
    return 0;
}

int main(void)
{
    int n, i;
    int a, b, c;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%s\n", isRight(a, b, c) ? "YES" : "NO");
    }

    return 0;
}