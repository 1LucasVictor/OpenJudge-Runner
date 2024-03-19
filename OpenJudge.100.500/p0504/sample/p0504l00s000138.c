#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int h, a;
    scanf("%d %d", &h, &a);
    printf("%d\n", h / a + (h % a ? 1 : 0));
    return EXIT_SUCCESS;
}
