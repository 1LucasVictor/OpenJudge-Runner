#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char buf[30];

    fgets(buf, sizeof(buf),stdin);

    n = atoi(buf);

    n = n + n*n + n*n*n;

    printf("%d\n", n);

}