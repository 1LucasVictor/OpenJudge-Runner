#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char buf[30];

//標準入力から一行bufに格納
    fgets(buf, sizeof(buf), stdin);
    n = atoi(buf);

    // 標準出力に

    printf("%d\n", n+(n*n)+(n*n*n));

    return 0;
}