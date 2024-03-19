#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top,P[1000000];

void push(int y) {
  P[++top] = y;
}

int pop() {
  top--;

  return P[top+1];
}

int main() {
  int a,b,c;
  char x[100];
  top=0;

  while(1) {
    if(scanf("%s",&x[0]) == EOF) break;

    if(x[0] == '+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(x[0] == '-'){
      a=pop();
      b=pop();
      push(a-b);
    }
    else if(x[0] == '*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else {
      c=atoi(x);
      push(c);
    }
  }

  printf("%d\n",pop());

  return 0;
}