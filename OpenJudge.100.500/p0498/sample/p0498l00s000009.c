#include<stdio.h>
int main()
{
    int i;
    int j;

    // 整数の入力
    scanf("%d", &i);
    
    if (i % 2 == 0)
        printf("%d\n", i / 2);
    else
        printf("%d\n", i / 2 + 1);

    return 0;
}