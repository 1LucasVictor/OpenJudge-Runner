// TogglingCases.c
// 与えられた文字列の小文字と大文字を入れ替えるプログラムを作成してください。
// 【入力】
// 文字列が1行に与えられます。
// 【出力】
// 与えられた文字列の小文字と大文字を入れ替えた文字列を出力して下さい。
// アルファベット以外の文字はそのまま出力して下さい。
// 【制約】
// 入力される文字列の長さ < 1200
// 【例】
// 入力：
// fAIR, LATER, OCCASIONALLY CLOUDY.
// 出力：
// Fair, later, occasionally cloudy.
#include<stdio.h>
#include<ctype.h>

int main( void) {
  char ch[1200];
  int counter = 0;

  for ( int i = 0; i < 1200 - 1; i++) {
    scanf( "%c", &ch[i]);
    if ( ch[i] == '\n') break;
    counter++;
  }

  for ( int i = 0; i < counter; i++) {
    if ( isupper( ch[i])) ch[i] = tolower( ch[i]);
    else if ( islower( ch[i])) ch[i] = toupper( ch[i]);

    printf( "%c", ch[i]);
  }
  printf( "\n");

  return 0;
}

