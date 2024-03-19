#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top,stack[100];
void push(int);
int pop();

int main(){
  int a,b,n;
  char s[100];
  top=0;
  while((scanf("%s",s)) != EOF){
    if (s[0] == '+'){
      b=pop(); 
      a=pop();
      push(a+b);
    }
    else if (s[0] == '-'){
      b=pop();
      a=pop();
      push(a-b);
    }
    else if (s[0] == '*'){
      b=pop();
      a=pop();
      push(a*b);
    }
    else {
      n = atoi(s);
      push(n);
    }
  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){
  top++;
  stack[top]=x;
  }

int pop(){
  int x;
  x = stack[top];
  top--;
  return x;
}