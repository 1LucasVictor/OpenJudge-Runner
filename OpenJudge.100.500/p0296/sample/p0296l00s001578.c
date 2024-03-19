#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
void nitialize(void);
void push(int);
int pop(void);

int top;
int Stack[N];
int main(){
  int x;
  int a,b;
  char s[N];
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
void nitialize(void){
  top=0;
}


void push(int x){
  if(top>N){
    printf("エラー（オーバーフロー）\n");
    exit(1);
  }else{
    Stack[++top]=x;
  }
}

  int pop(void){
    if(top<0){
      printf("エラー（アンダーフロー）\n");
      exit(2);
    }else{
      top--;
      return Stack[top+1];
    }
  }