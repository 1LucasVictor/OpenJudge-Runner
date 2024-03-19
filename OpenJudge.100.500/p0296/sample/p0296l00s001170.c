#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int top, N[1000];
 
void push(int x)
{
  top++;
  N[top] = x;
}
 
int pop()
{
  top--;
  return N[top+1];
}
 
int main()
{
 
  char n[100];
  int a, b, top=0;
 
  while(scanf("%s", n) != EOF){
    if(n[0] == '+'){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(n[0] == '-'){
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(n[0] == '*'){
      a = pop();
      b = pop();
      push(a*b);
    }
    else push(atoi(n));
  }
  printf("%d\n", pop());
 
  return 0;
}