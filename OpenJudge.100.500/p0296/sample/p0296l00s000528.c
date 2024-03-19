#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

void initialize();
int isEmpty();
int isFull();
void  push(int x);
int pop();

int top;
int S[1000];

int main(){
  int x,n1,n2;
  char s[100];

  while( scanf("%s", s) != EOF ){

    if ( s[0] == '+' ){
      n1 = pop();
      n2 = pop();
      push(n1 + n2);
    } else if ( s[0] == '-' ){
      n1 = pop();
      n2 = pop();
      push(n2 - n1);
    } else if ( s[0] == '*' ){
      n1 = pop();
      n2 = pop();
      push(n1 * n2);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  return 0;
}

void initialize(){
  top = 0;
}

int isEmpty(){
  return top == 0;
}

int isFull(){
  return top >= MAX - 1;
}

void  push(int x){
  if (isFull()) fprintf(stderr,"overflow\n");
  top++;
  S[top] = x;
}

int pop(){
  if (isEmpty()) fprintf(stderr,"underflow\n");
  top--;
  return S[top+1];
}