#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

void push(int);
int pop(void);

int top = 0;
int stack[MAX];

int main(){
  int a, b;
  char in[MAX];

  while(1){
    //printf("%c", in[i]);
    if(scanf("%s", in) == EOF) break;
    
    if(in[0] == '+'){
      push(pop() + pop());
    }
    else if(in[0] == '-'){
      a = pop();
      b = pop();
      push(b - a);
    }
    else if(in[0] == '*'){
      push(pop() * pop());
    }
    else{
      push(atoi(in));
    }
  }
  //printf("\n");

  printf("%d\n", pop());
  
  return 0;
}

void push(int x){
  top++;
  stack[top] = x;
}

int pop(){
  top--;
  return stack[top+1];
}

