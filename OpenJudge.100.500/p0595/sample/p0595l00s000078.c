#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, k = 0, res = 0, count = 0;

    scanf("%d %d %d", &a, &b, &k);
    for (int i = 1; i <= 100; i++) {
        if (count == k) {
            printf("%d\n", res);
            break;
        }
        if ((a % i) == 0 && (b % i) == 0) {
            count++;
            res = i;
        }
    }
    return 0;
}
