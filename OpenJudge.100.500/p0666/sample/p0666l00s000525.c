#include <stdio.h>

int main(int argc, char **argv)
{
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);

    if (b-a < 1) {
        puts("delicious");
    } else {
        if (b-a > x) {
            puts("dangerous");
        } else {
            puts("safe");
        }
    }
    return 0;
}