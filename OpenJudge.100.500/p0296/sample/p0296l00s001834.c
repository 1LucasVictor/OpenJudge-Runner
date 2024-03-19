#include <stdio.h>
#include <stdlib.h>
#define MAX 199
#define true 1
#define false 0
void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);
int top = 0;
int S[MAX];

int main()
{
  int x,a1,a2;
  char s[7];

  while(scanf("%s",s) != EOF){
    
    if(s[0] == '+'){
      a1 = pop();
      a2 = pop();
      x = a1 + a2;
      push(x); }
    else if(s[0] == '-'){
      a1 = pop();
      a2 = pop();
      x = a2 - a1; 
      push(x); }
    else if(s[0] == '*'){
      a1 = pop();
      a2 = pop();
      x = a1 * a2;
      push(x); }
    else{
      x = atoi(s);
      push(x); }
    
  }

  x = pop();
  
  printf("%d\n",x);

  return 0;
}

void initialize(void)
{
  top = 0;
}

int isEmpty(void)
{
  if(top == 0) return true;
  return false;
}

int isFull(void)
{
  if(top >= MAX - 1) return true;
  return false;
}

void push(int x)
{
  
  if(isFull() == true) printf("error overfllow\n");

  top++;
  
  S[top] = x;

}

int pop(void)
{

  if(isEmpty() == true) printf("error underfllow\n");

  top--;

  return S[top+1];
}
