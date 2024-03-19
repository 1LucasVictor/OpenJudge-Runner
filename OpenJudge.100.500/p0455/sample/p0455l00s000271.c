#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    char buf[30];

    // 標準入力から1行bufに格納
    fgets(buf, sizeof(buf), stdin);

    a = atoi(buf);

    printf("%d\n", a*a*a + a*a + a);

    return 0;
}
