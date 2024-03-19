#include <stdio.h>
#include <stdlib.h>
#define N 100

int top, S[N];
void initialize(void);
void push(int);
int pop(void);

int main(){
  int a, b, x;
  char s[N];
  initialize();
  while(scanf("%s",s) != EOF){
    if(s[0] == '+'){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(s[0] == '-'){
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(s[0] == '*'){
      a = pop();
      b = pop();
      push(a*b);
    }
    else{
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  
  return 0;
}

void initialize(void){
  top = 0;
}

void push(int x){
  top++;
  S[top] = x;
}

int pop(void){
  top--;
  return S[top+1];
}