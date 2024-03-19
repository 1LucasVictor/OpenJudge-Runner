#include <stdio.h>
#include <stdlib.h>

#define N 100

void push(int);
int pop(void);

int stack[N];
int top = 0;


int main() {
  int n, ans, num1, num2, status;
  char c[N];
  
  while(1) {

    if (scanf("%s", c) == EOF) break;
    
    else if (c[0] >= '0' && c[0] <= '9') {
      n = atoi(c);
      push(n);
    }
    else if (c[0] == '+') {
      num1 = pop();
      num2 = pop();
      n = num1 + num2;
      push(n);
    }
    else if (c[0] == '-') {
      num2 = pop();
      num1 = pop();
      push(num1 - num2);
    }
    else if (c[0] == '*') {
      num1 = pop();
      num2 = pop();
      push(num1 * num2);
    }
  }
  
  ans = pop();

  printf("%d\n", ans);

  return 0;

}



void push(int n) {
  if (top == N) {
    printf("Stack overflow!\n");
    exit(2);
  }
  stack[top] = n;
  top++;
}

int pop(void) {
  if (top == 0) {
    printf("Stack is empty!\n");
    exit(3);
  }
  top--;
  return stack[top];
}

