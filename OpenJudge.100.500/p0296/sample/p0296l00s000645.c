#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pop();
void push(int);

int s[100],top = 0;

int main() {
  int x, y, z;
  char str[100];
  
  while(scanf("%s",str) != EOF) {
    if ( str[0] == '+' ){
      x = pop();
      y = pop();
      push(x + y);
    } else if ( str[0] == '-' ){
      x = pop();
      y = pop();
      push(x - y);
    } else if ( str[0] == '*' ){
      x = pop();
      y = pop();
      push(x * y);
    } else {
      z = atoi(str);
      push(z);
    }
  }
  printf("%d\n",pop());

  return 0;
}

int pop() {
  return s[top--];
}

void push(int n) {
  s[++top] = n;
}