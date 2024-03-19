#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100   //最大スタック量
#define MAX 1000000000

int top=0;
int S[Max];
char s[MAX];

void initialize(); 
//topを0としスタックを空にする
int isEmpty();     
//topが0かどうかを調べスタックが空かどうか判断する
int isFull();      
//スタックが満杯かどうかを判断
void push(int);
//topを1つ増やしそこにxを追加
int pop();         
//topが示す要素(スタックの頂点の要素)を返しつつtopの値を１つ減し頂点の要素を削除


void initialize(){
  top = 0;
}

void push(int x){
 top++;
 S[top] = x;
}

int pop(){ 
  top--;
  return S[top+1];
}



int main(){
  int a,b;
  int x;

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a = pop();
      b = pop();
      push(a+b);
    } 
    else if ( s[0] == '-' ){
      a = pop();
      b = pop();
      push(b-a);
    } 
    else if ( s[0] == '*' ){
      a = pop();
      b = pop();
      push(a*b);
    } 
    else {
      x = atoi(s);
      push(x);
    }
  }

  printf("%d\n",pop());
  return 0;
}
