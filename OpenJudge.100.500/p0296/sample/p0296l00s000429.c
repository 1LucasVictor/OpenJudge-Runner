#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top = 0;
int S[200];

void push(char n){
  S[++top] = n;
}

int pop(){
  top--;
  return S[top+1];
}

int main(){
  int a;
  int b;
  char s[198];

  while(scanf(" %s",s) != EOF){
    if(s[0] == '+'){
      a = pop();
      b = pop();
      push(a + b);
    }
    else if(s[0] == '-'){
      a = pop();
      b = pop();
      push(a - b);
    }
    else if(s[0] == '*'){
      a = pop();
      b = pop();
      push(a * b);
    }
    else if(s[0] == '/'){
      a = pop();
      b = pop();
      push(a / b);
    }
    else push(atoi(s));
  }
  printf("%d\n",pop());
  return 0;
}



