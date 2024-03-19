/*--------------------------*/
// p.82
// 4.2 スタック 
//
// 逆ポーランド記法
//
// 入力例： 1 2 + 3 4 - *
// 出力例：-3
/*--------------------------*/

// memo: scanf("%s", s) != EOF は，UNIXでは「Ctrl + D」がEOFになる

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, S[1000];

void push(int x){
  /* topを加算してからその位置へ挿入 */
  S[++top] = x;
}

int pop(){
  /* topが差していた要素を返す */
  top--;
  return S[top + 1];
}

int isEmpty(){
  if (0 == sizeof(S) / sizeof(int)) {
    return 1;
  } else {
    return 0;
  }
}

int main(){
  int a, b;
  top = 0;
  char s[100];

  while(scanf("%s", s) != EOF){
    if (s[0] == '+'){
      b = pop();
      a = pop();
      push(a + b);
    }else if (s[0] == '-'){
      b = pop();
      a = pop();
      push(a - b);
    }else if (s[0] == '*'){
      b = pop();
      a = pop();
      push(a * b);
    }else {
      push(atoi(s));
    }
  }

  printf("%d\n", pop());
  return 0;
}


