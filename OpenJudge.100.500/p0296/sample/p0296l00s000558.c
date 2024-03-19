#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=0,t[1000];
void push(int);
int pop(void);

int main(){
  int x,y;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x=pop();
      y=pop();
      push(x+y);
    } else if ( s[0] == '-' ){
      y=pop();
      x=pop();
      push(x-y);
    }else if ( s[0] == '*' ){
      x=pop();
      y=pop();
      push(x*y);
    } else {
      push(atoi(s));
    }
  }
  printf("%d\n",pop());

  return 0;
}void push(int x){
  if(top==1000){
    printf("Stack overflow!\n");
    exit(1);
  }
  t[top]=x;
  top++;
}
int pop(void){
  if(top==0){
    printf("Stack is empty!\n");
    exit(2);
  }
  top--;
  return t[top];
}

