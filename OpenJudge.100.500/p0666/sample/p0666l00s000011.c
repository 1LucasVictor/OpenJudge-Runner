#include <stdio.h>

int main() {
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    if (b <= a)
        puts("delicious");
    else {
        if (b > a+x)
            puts("dangerous");
        else
            puts("safe");
    }
    return 0;
}
