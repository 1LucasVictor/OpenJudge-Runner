#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a,b;
    fscanf(stdin, "%d %d", &a, &b);
    printf("%s\n", (a & 1) == 0 || (b & 1) == 0 ? "Even" : "Odd");
    return 0;
}
