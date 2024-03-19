#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int h, n;
    scanf("%d %d", &h, &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        h -= a;
        if (h <= 0) {
            printf("Yes\n");
            return EXIT_SUCCESS;
        }
    }
    printf("No\n");
    return EXIT_SUCCESS;
}
