#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEmpty(void);
void push(int);
int pop(void);

int top=0, S[100];

int main()
{
  int a, b, x;
  char s[100];

  while(scanf("%s", s) != EOF){
    if(s[0] == '+' ){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(s[0] == '-'){
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(s[0] == '*'){
      a = pop();
      b = pop();
      push(a*b);
    }
    else {
      x = atoi(s);
      push(x);
    }
  }

  printf("%d\n", S[top]);
  return 0;
}

int isEmpty(void)
{
  if(top == 0) return 0;
  else return 1;
}

void push(int x)
{
  top++;
  S[top] = x;
}

int pop(void)
{
  if(isEmpty() == 1){
    top--;
    return S[top+1];
  }
}