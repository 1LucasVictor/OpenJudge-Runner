#include<stdio.h>
void push(int);
int pop(void);

int stack[100];
int top;
int main(){
  int in;
  char c;
  top = 0;
  while(scanf("%c",&c)!=EOF){
    if( '0' <= c && c <= '9' ){
      in =  c - '0';
      push(in);
    }
    else  if( c == '+' ){
      stack[top] += pop();
    }
    else if( c == '-' ){
      stack[top] -= pop();
    }
    else if( c == '*' ){
      stack[top] *= pop();
    }
  }
  printf("%d\n",stack[1]);
  
  return 0;
}
void push(int x){
  top++;
  stack[top] = x;
}
int pop(void){
  top--;
  return stack[top+1];
}