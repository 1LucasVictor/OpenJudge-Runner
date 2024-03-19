#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, N[1000];

void push(int);
int pop(void);

int main(){
  int x,y;
  char n[100];
  top = 0;

  while(scanf("%s", n) != EOF){
    if(n[0] == '+'){
      x = pop();
      y = pop();
      push(x + y);
    }
    else if(n[0] == '-'){
      y = pop();
      x = pop();
      push(x - y);
    }
    else if(n[0] == '*'){
      x = pop();
      y = pop();
      push(x * y);
    }
    else{
      push(atoi(n));
    }
  }

  printf("%d\n", pop());

  return 0;
}


void push(int x){
  N[++top] = x;
}

int pop(){
  top--;
  return N[top + 1];
}

