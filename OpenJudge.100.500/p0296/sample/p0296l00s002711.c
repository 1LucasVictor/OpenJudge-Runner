#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void push(int);
int pop();
void initialize();
int isEmpty();
int isFull();

int S[MAX];
int top;

int main() {
  int i=0,j,num=0, work;
  char input[10];

  while(scanf("%s", input) != EOF){
      switch (input[0]) {
      case '+' :
	work = pop() + pop();
	push(work);
	break;
      case '-' :
	work = pop() - pop();
	push(work);
	break;
      case '/' :
	work = pop() / pop();
	push(work);
	break;
      case '*' :
	work = pop() * pop();
	push(work);
	break;
      default :
	push(atoi(input));
	break;
      }
  }
  
  printf("%d\n", pop());
  
  return 0;
}



void initialize()
{
  top=0;
}

int isEmpty()
{
  if(sizeof(S) == 0)
    return 1;
  else 
    return 0;
}

int isFull()
{
  if(top >= MAX-1)
    return 1;
  else 
    return 0;
}
 
void push(int x)
{
  if(isFull() == 1){
    printf("over flow\n");
  }

  else{
    top++;
    S[top] = x;
  }
}

int pop()
{
  if(isEmpty() == 1){
    printf("under flow");
  }

  else{
    top--;
    return S[top+1];
  }
}