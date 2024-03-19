// SumOfNumbers.c
// 与えられた数の各桁の和を計算するプログラムを作成して下さい。
// 【入力】
// 複数のデータセットが入力として与えられます。
// 各データセットは１つの整数 x を含む１行で与えられます。
// x は 1000 桁以下の整数です。
// x が 0 のとき入力の終わりとします。このデータセットに対する出力を行ってはいけません。
// 【出力】
// 各データセットに対して、x の各桁の和を１行に出力して下さい。
// 【例】
// 入力：
// 123
// 55
// 1000
// 0
// 出力：
// 6
// 10
// 1
#include<stdio.h>
#include<string.h>

int main( void) {
  char X[1001];

  while( 1) {
    scanf( "%s", X);
    if ( strcmp( X, "0") == 0) break;

    int len = (int)strlen( X);
    int sum = 0;
    for ( int i = 0; i < len; i++) {
      sum += (int)( X[i] - '0');
    }
    printf( "%d\n", sum);
  }

  return 0;
}

