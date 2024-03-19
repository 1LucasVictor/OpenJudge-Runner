#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

int pop();
void push();

char S[MAX];
int stack_size = 0, A[MAX];

int main()
{
  int i, a, b, x;
  
  while(scanf("%s",S)!=EOF){
    if(S[0]=='+'){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(S[0]=='-'){
      a = pop();
      b = pop();
      push(b-a);
    }
    else if(S[0]=='*') {
      a = pop();
      b = pop();
      push(a*b);
    }
    else{
      x = atoi(S);
      push(x);
    }
  }
  printf("%d\n",pop());
  return 0;
}

int pop(void)
{
  stack_size--;
  return A[stack_size+1];
}

void push(int a)
{
  A[++stack_size] = a;
}