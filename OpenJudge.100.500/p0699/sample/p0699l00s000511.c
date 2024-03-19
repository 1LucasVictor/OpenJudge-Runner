/*
  第4回ユニリタプログラミングコンテスト～練習サイト～
  C言語用
  ファイル名 qA.c
  作成者 228 金子幸裕 2017/06/14 17:30
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
    int na, nb, nc;

    scanf( "%d %d %d" , &na, &nb, &nc );

    if ( ( na == 5 || na == 7 ) &&
         ( nb == 5 || nb == 7 ) &&
         ( nc == 5 || nc == 7 ) &&
         ( na + nb + nc == 17 ) )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    printf("\n");

    return ( 0 );

}
