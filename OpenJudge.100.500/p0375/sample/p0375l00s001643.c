#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i = 1;
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x = i;
        if (x % 3 == 0) {
            printf(" %d", i);
        } else {
            while (x) {
                if (x % 10 == 3) {
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }
        }
    }
    printf("\n");

    return 0;
}
