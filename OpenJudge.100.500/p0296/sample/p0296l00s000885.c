#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

typedef struct{
  int top;
  int stack[MAX];
}Stack;

int push(Stack*, int);
int pop(Stack*);

int push(Stack *s, int in){
  if(s->top < MAX){
    s->stack[s->top] = in;
    s->top++;
    return 1;
  }
  return 0;
}

int pop(Stack *s){
  if(s->top >= 0){
    s->top--;
    return s->stack[s->top];
  }
  printf("NO_DATA\n");
  return 0;
}
int main(int argc, char const *argv[]) {
  int t=0;
  char inp[10];
  int a, b, c, i;
  Stack s;
  s.top = 0;

  while(scanf("%s",inp) != EOF){
    //printf("%d time(s)  %s\n",++t,inp);
    if(inp[0] == '+'){
      //printf("+\n");
      b = pop(&s);
      a = pop(&s);
      c = a + b;
      push(&s, c);
    } else if(inp[0] == '-'){
      //printf("-\n");
      b = pop(&s);
      a = pop(&s);
      c = a - b;
      push(&s, c);
    } else if(inp[0] == '*'){
      //printf("-\n");
      b = pop(&s);
      a = pop(&s);
      c = a * b;
      push(&s, c);
    } else {
      //printf("?\n");
      push(&s, atoi(inp));
    }
    //for(i=0;i<s.top;i++)printf("%d ",s.stack[i]);printf("\n\n");
  }

  printf("%d\n",s.stack[0]);
  return 0;
}

