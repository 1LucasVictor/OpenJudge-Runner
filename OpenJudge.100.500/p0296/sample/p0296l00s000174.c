#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void push(int );
int  pop(void );
int S[MAX];
int top = 0;

int main() {
  char kari[MAX];
  int i=0,a;
  while(scanf("%s",kari) != EOF) {
    if(kari[0] == '+') {
      push(pop() + pop());
  } else if ( kari[0] == '-' ){
    a = pop();
    push(pop() - a);
 } else if ( kari[0] == '*' ){
   push(pop() * pop());
 } else {
   push( atoi(kari));
 }
  }
   printf("%d\n",pop());
   return 0;
}

void  push(int n)
{
  //printf("pushbefore %d\n",n);
  if(top > MAX) printf("error(overfllow)\n");
  else {
    S[++top] = n;
  //  printf("push %d\n",S[top-1]);
  }
}

int pop(void)
{
  if(top < 0) {
    //printf("error(overfllow)\n");
    return 0;
  }
  else {
    top--;
    return S[top+1];
  }
}