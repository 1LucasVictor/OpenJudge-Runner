#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return EXIT_SUCCESS;
}
