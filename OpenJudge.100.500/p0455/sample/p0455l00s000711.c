#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char buf[30];

    // 標準入力から1行bufに格納
    fgets(buf, sizeof(buf), stdin);

    n = atoi(buf);
    n = n + (n*n) + (n*n*n);

    // 標準出力に書き出す
    printf("%d\n", n);
}