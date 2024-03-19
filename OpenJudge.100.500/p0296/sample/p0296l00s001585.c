#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int isEmpty();
int isFull();
void push(int);
int pop();

int top = 0;
int S[MAX];

int main() {
  int a,b;
  char c[10];

  while (scanf("%s", c) != EOF) {
    if (c[0] == '+') {
      a = pop();
      b = pop();
      push(b+a);
    } else if (c[0] == '-') {
      a = pop();
      b = pop();
      push(b-a);
    } else if (c[0] == '*') {
      a = pop();
      b = pop();
      push(b*a);
    } else {
      a = atoi(c);
      push(a);
    }
  }

  a = pop();
  printf("%d\n", a);

  return 0;
}

int isEmpty() {
  return top == 0;
}

int isFull() {
  return top > MAX-1;
}

void push(int x) {
  if (isFull()) printf("overflow\n");
  top++;
  S[top] = x;
}

int pop() {
  if (isEmpty()) printf("underflow\n");
  top--;
  return S[top+1];
}