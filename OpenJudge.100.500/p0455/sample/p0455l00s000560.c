#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    char buf[30];

    //標準入力から一行をbufに格納
    fgets(buf, sizeof(buf), stdin);

    n = atoi(buf);
    
    if ((n>10) | (n<1))
    {
        return 0;
    }
    else
    {
        n = n + n * n + n * n * n;
    }
    
    

    //標準入力に書き出す
    printf("%d\n", n);
    return 0;
}