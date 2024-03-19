/*氏名：保坂優介, 学籍番号：200441141
  概要：数列を反転する*/

#include<stdio.h>

int main(void)
{
    int i, j, n, a[1000] = { 0 };       //変数の宣言

    scanf("%d", &n);        //入力

    for (i = 0; i < n; i++)     //n回読み込み
    {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i > 0; i--)
    {
        printf("%d ", a[i]);        //表示
    }

    printf("%d\n", a[0]);        //表示

    return 0;
}
