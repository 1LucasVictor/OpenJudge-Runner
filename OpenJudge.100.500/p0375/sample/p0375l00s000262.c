#include <stdio.h>
//#include <string.h>

int main() {
    int n, i, x, include3 = 0;

    scanf("%d", &n);

    i = 1;

    while (1) {
        if (!include3) {
            // check num
            x = i;
            if (x % 3 == 0) {
                printf(" %d", i);
                if (++i <= n) {
                    include3 = 0;
                    continue;
                }
                else
                    break;
            }
        }
        include3 = 0;

        // include3
        if (x % 10 == 3) {
            printf(" %d", i);
            if (++i <= n) {
                include3 = 0;
                continue;
            }
            else
                break;
        }

        x /= 10;
        if (x) {
            include3 = 1;
            continue;
        }

        if (++i <= n) {
            include3 = 0;
            continue;
        }
        else
            break;
    }

    printf("\n");

    return 0;
}
