#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int S[MAX];
int top=0;

int main(){
  int i, j, n, x, y;
  char c[MAX], c2[MAX];

  initialize();

  for(i = 0; i < MAX; i++){
    scanf("%c", &c[i]);
    if(c[i] == '\n'){
      n = i;
      break;
    }
  }

  for(i = 0; i < n; i++){
    if(c[i] == ' ')
      continue;
    else if(c[i] == '+' || c[i] == '-' || c[i] == '*'){
      y = pop();
      x = pop();
      //printf("x = %d, y = %d\n", x, y);
      switch(c[i]){
      case '+':
	push(x + y);
	break;
      case '-':
	push(x - y);
	break;
      case '*':
	push(x * y);
	break;
      }
      //printf("top= %d\n", top);
      //printf("S[top] = %d\n", S[top]);
      //printf("S[top-1] = %d\n", S[top-1]);
    }
    else{
      memset(c2, '\0', strlen(c2));
      for(j = 0; c[i+j] != ' '; j++)
	c2[j] = c[i+j];
      i += j;
      //printf("%c\n", c2);
      push(atoi(c2));
    }
  }

  printf("%d\n", pop());

  return 0;
}

void initialize(void){
  top = 0;
}

int isEmpty(void){
  if(top == 0)
    return 0;
  else
    return 1;
}

int isFull(void){
  if(top >= MAX - 1)
    return 0;
  else
    return 1;
}

void push(int x){
  if(isFull() == 0){
    printf("Error (OverFlow)\n");
    exit(1);
  }
  top++;
  S[top] = x;
}

int pop(void){
  if(isEmpty() == 0){
    printf("Error (UnderFlow)\n");
    exit(2);
  }
  top--;
  return S[top+1];
}