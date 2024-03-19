#include <stdio.h>

#define STACK 100
#define MAX 199

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int x);
int pop(void);

int stack[STACK];
int top;

int main(void) {
  int n1, n2;
  char ch;

  initialize();

  while(scanf("%c", &ch) != EOF) {

    if(ch == ' ') continue;

    if('0' <= ch && ch <= '9') {
      push(ch-'0');
    }
    if(ch == '+' || ch == '-' || ch == '*') {
      n1 = pop();
      n2 = pop();
      switch (ch) {
        case '+': push(n2 + n1);
                  break;
        case '-': push(n2 - n1);
                  break;
        case '*': push(n2 * n1);
                  break;
        default : break;
      }
    }

    if(ch == '\n') printf("%d\n", pop());

  }

  return 0;
}

void initialize(void) {
  top = 0;
}

int isEmpty(void) {
  return top == 0;
}

int isFull(void) {
  return top >= MAX-1;
}

void push(int x) {
  if(isFull()) {
    return;
  }
  ++top;
  stack[top] = x;
}

int pop(void) {
  if(isEmpty()) {
    return 0;
  }
  --top;
  return stack[top+1];
}

