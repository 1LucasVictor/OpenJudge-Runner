#include <stdio.h>
#include <stdlib.h>

int top = -1;
int S[100];

void push(int);
void operate(char);
int pop(void);

int main(){
  char n[100];

 
   while(1){
    if(scanf("%s ", n) == EOF) break;

    if(n[0] == '+' || n[0] == '-' || n[0] == '*'){
      operate(n[0]);
    }else {
      push(atoi(n));
    }
  }

  printf("%d\n", S[top]);

  return 0;

}

void push(int n){
  top++;
  S[top] = n;
}

int pop(){
  int n;

  n = S[top];

  top--;

  return n;

}

void operate(char o){
  int n;
  int a, b;

  switch(o){
  case '+':
    n = pop() + pop();
    break;
  case '-':
    // n = -1 * (pop() - pop()); 
    a = pop();
    b = pop();
    n = -1 * (a - b);
    break;
  case '*':
    n = pop() * pop();
    break;
  }
    push(n);
}