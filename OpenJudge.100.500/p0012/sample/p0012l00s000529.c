#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define PUSH intStackPush
#define POP intStackPop
#define TOP intStackTop
#define FREE intStackFree

typedef struct stack{ int data; struct stack* next; }stack;

stack *top = NULL;

stack* makeNewStack(int data){
  stack *new = (stack*)malloc(sizeof(stack));
  new->data = data;
  new->next = NULL;
  return new;
}

void intStackPush(int data){
  stack *new = makeNewStack(data);
  if(top != NULL){ new->next = top; top = new; }
  else top = new;
}

void intStackPop(){
  stack *temp;
  temp = top;
  top = top->next;
  free(temp);
}

int intStackTop(){ return top->data;}

void intStackFree(){ while(top != NULL) intStackPop();}

int main(){
  int in;

  while(scanf("%d", &in) != EOF){
    if(in == 0){
      printf("%d\n",TOP());
      POP();
    }
    else PUSH(in);
  }

  FREE();
  return 0;
}