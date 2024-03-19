#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int
main(int argc, char *argv[])
{
    unsigned int X;

    scanf("%u", &X);

    unsigned int a = X / 500;
    unsigned int b = X % 500;
    unsigned int c = b / 5;

    printf("%u\n", a * 1000 + c * 5);

    return EXIT_SUCCESS;
}
