#include <stdio.h>
#include <stdlib.h>
 
static int stack[100];
static int top = 0;
 
int isEmpty(void) {
  if (top == 0) {
    return -1;
  }
  return 0;
}
 
int isFull(void) {
  if (top == 100) {
    return -1;
  }
  return 0;
}
 
void push(int v) {
  if (isFull() < 0) {
    puts("push ERROR: stack full");
    exit(EXIT_FAILURE);
  }
  stack[++top] = v;
}
 
int pop(void) {
  if (isEmpty() < 0) {
    puts("pop ERROR: stack empty");
    exit(EXIT_FAILURE);
  }
  return stack[top--];
}
 
int main(void) {
  int a, b;
  char input[100];
   
  while ( scanf("%s", input) != EOF ) {
    switch (input[0]) {
    case '+':
      b = pop();
      a = pop();
      push(a+b);
      break;
    case '-':
      b = pop();
      a = pop();
      push(a-b);
      break;
    case '*':
      b = pop();
      a = pop();
      push(a*b);
      break;
    default:
      push(atoi(input));
    }
  }
  printf("%d\n", pop());
 
  exit(EXIT_SUCCESS);
}
