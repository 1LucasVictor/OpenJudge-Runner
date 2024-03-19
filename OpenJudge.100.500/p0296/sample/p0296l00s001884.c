#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pop(void);
void push(int);
int isEmpty(void);
int isFull(void);

int top,S[100];

int main(){
  int x;
  char s[100];
  int a,b;
  
  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a=pop();
      b=pop();
      push(a+b);
    } else if ( s[0] == '-' ){
      a=pop();
      b=pop();
      push(b-a);
    } else if ( s[0] == '*' ){
      a=pop();
      b=pop();
      push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  
  return 0;
}
int pop(void){
  if(isEmpty()==1){
    exit(1);
  }
  else{
    top--;
  return S[top+1];
  }
}
void push(int x){
  if(isFull()==1){
    exit(1);
  }
  else{
    top++;
    S[top]=x;
    }
}
int isEmpty(void){
  if(top==0) return 1;
  else return 2;
}
int isFull(void){
  if(top>=99) return 1;
  else return 2;
  }