#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char buf[4];
    fscanf(stdin, "%s", buf);

    printf("%d\n", (buf[0] - 0x30)+(buf[1] - 0x30)+(buf[2] - 0x30));
    return 0;
}
