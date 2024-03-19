// Shuffle.c
// １つのアルファベットが描かれた n 枚のカードの山をシャッフルします。
// 1回のシャッフルでは、下から h 枚のカードをまとめて取り出し、それを残ったカードの山の上に積み上げます。
// カードの山は以下のように１つの文字列で与えられます。
//   abcdeefab
// 最初の文字が一番下にあるカード、最後の文字が一番上にあるカードを示しています。
// 例えば、これを h が 4 でシャッフルすると、最初の4文字 abcd が、
// 残りの文字 eefab の末尾へ連結されるので以下のようになります：
//   eefababcd
// このシャッフルを何回か繰り返します。
// カードの山の最初の並び（文字列）と h の列を読み込み、最後の並び（文字列）を出力するプログラムを作成して下さい。
// 【入力】
// 複数のデータセットが入力として与えられます。各データセットは以下の形式で与えられます：
//   最初の並びを表す文字列
//   シャッフル回数 m
//   h1
//   h2
//     .
//     .
//   hm
// 最初の並びを表す文字列が "-" のとき入力の終わりとします。
// 【制約】
// 1 ≤ 文字列の長さ≤ 200
// 1 ≤ m ≤ 100
// 1 ≤ hi < 文字列の長さ
// データセットの数は10を超えない
// 【出力】
// 各データセットに対して、最後の並び（文字列）を１行に出力して下さい。
// 【例】
// 入力：
// aabc
// 3
// 1
// 2
// 1
// vwxyz
// 2
// 3
// 4
// -
// 出力：
// aabc
// xyzvw
#include<stdio.h>
#include<string.h>

void shuffle( char str[], int h) {
  char sub[201] = {};
  int i, j;

  for ( i=0; i < h; i++) {
    sub[i] = str[i];
  }
  sub[i] = '\0';

  for ( j=h; j < strlen( str); j++) {
    str[j-h] = str[j];
  }
  str[j-h] = '\0';

  strcat( str, sub);
}

int main( void) {
  char cards[201];
  int shuffle_num;
  int h;

  while ( 1) {
    scanf( "%s", cards);
    if ( strcmp( cards, "-") == 0) break;

    scanf( "%d", &shuffle_num);
    for ( int i = 0; i < shuffle_num; i++) {
      scanf( "%d", &h);
      shuffle( cards, h);
    }
    printf( "%s\n", cards);
  }

  return 0;
}

