#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push(int x) {
  // top を加算してからその位置へ挿入
  S[++top] = x;
}

int pop() {
  top--;
  // topが指していた要素を返す
  return S[top+1];
}

int main() {
  int a, b;
  top = 0;
  char s[100];

  while( scanf("%s", s) != EOF ) {
    if ( s[0] == '+' ) {
      a = pop();
      b = pop();
      push(a + b);
    } else if ( s[0] == '-' ) {
      a = pop();
      b = pop();
      push(a - b);
    } else if ( s[0] == '*' ) {
      a = pop();
      b = pop();
      push(a * b);
    } else {
      push(atoi(s));  // atoi()は文字列で表現された数値をint型の数値に変化する
    }                 // C言語の標準ライブラリの関数
  }

  printf("%d\n", pop());

  return 0;
}
