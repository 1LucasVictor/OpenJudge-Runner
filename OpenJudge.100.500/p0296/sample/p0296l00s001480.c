#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int s[1000],top;
void push(int x);
int pop(void); 

int main(){
  int a,b;
  char s[1000000];
  top = 0;

  while(scanf("%s",s)!=EOF){
    if('+' == s[0]){
      a = pop();
      b = pop();
      push(a + b);
    }
    else if(s[0] == '-'){
      a = pop();
      b = pop();
      push(a - b);
    }
    else if('*' == s[0]){
      a = pop();
      b = pop();
      push(a * b);
    }
    else
      push(atoi(s));
  }

  printf("%d\n",pop());

  return 0;
}
void push(int x){
  s[++top] = x;
}
int pop(void){
  return s[top--];
}