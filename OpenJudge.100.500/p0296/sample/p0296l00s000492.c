//------------------------
// ヘッダファイル
//------------------------
#include <stdio.h>
#include <ctype.h>

//------------------------
// マクロ
//------------------------
#define STACK 10

//------------------------
// 主処理
//------------------------
int main()
{
  //--- 宣言
  int stack[STACK]; // スタック
  int stack_n;  // スタック位置
  int sum; // 合計
  int digit_f; // 数が連続した場合のフラグ
  int k;  // 一時変数
  char ch;  // 文字取り出し用
  //--- 初期化
  stack_n = 0;
  digit_f = 0;
  //--- 入力
  
  while( (ch = getchar()) != '\n' ) { // 改行がくるまで入力を続ける
    //--- 計算
    if( isdigit(ch) ) { // 文字が整数('0'～'9')までの場合
      if( digit_f ) { // 整数が連続したかの判定
        stack[stack_n] = stack[stack_n] * 10 + (ch - '0');  // 連続した場合元の数に10かけてたす
      } else {
        stack[stack_n] = (ch - '0');
        digit_f++;
      }
    }
    if( isspace(ch) ) { // 空白なら
      if( digit_f ) { // 前の文字が整数だった場合
        stack_n++;
        digit_f = 0;
      }
    }
    if( ch == '+' ) { // 足し算
      //printf("+\n");  // デバッグ用
      if( stack_n > 1 ) {
        stack_n--;
      }
      stack[stack_n-1] += stack[stack_n];
      stack[stack_n] = 0;
    }
    if( ch == '-' ) { // 引き算
      //printf("-\n");  // デバッグ用
      if( stack_n > 1 ) {
        stack_n--;
      }
      stack[stack_n-1] -= stack[stack_n];
      stack[stack_n] = 0;
    }
    if( ch == '*' ) { // 掛け算
      //printf("*\n");  // デバッグ用
      if( stack_n > 1 ) {
        stack_n--;
      }
      stack[stack_n-1] *= stack[stack_n];
      stack[stack_n] = 0;
    }
    if( ch == '/' ) { // 割り算
      //printf("/\n");  // デバッグ用
      if( stack_n > 1 ) {
        stack_n--;
      }
      stack[stack_n-1] /= stack[stack_n];
      stack[stack_n] = 0;
    }
    /* for( k=0; k<=stack_n; k++ ) {  // デバッグ用
      printf("%d ",stack[k]);
    }
    printf("\n"); */
  }
  //--- 出力
  printf("%d\n",stack[0]);
  //--- 終了
  return 0;
}


