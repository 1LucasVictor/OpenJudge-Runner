#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int top;
void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);
int S[MAX];

void plas(void);
void min(void);
void times(void);
int a,b,c;
int main(){
  char inputc;
  char *c;
  int inputi,i=0;
  c=&inputc;
  while(1){
    if(scanf(" %s",c)==EOF)break;
    if(inputc=='+')plas();
    else if(inputc=='-') min();
    else if(inputc=='*') times();
    else {
      inputi=atoi(c);
      push(inputi);
    }
  }
  printf("%d\n",S[1]);

  return 0;
}


void initiaize(void){
  top=0;

}

int isEmpty(void){
  if(top==0) return -1;
  else return 0; 
}

int isFull(void){
  if(top>=MAX-1) return -1;
  else return 0;
}

void push(int x){
  if(isFull()==-1) exit(1);
  else {
    top++;
    S[top]=x;
  }

}

int pop(void){
  if(isEmpty()==-1) exit(2);
  else {
    top--;
    return S[top+1];
  }
}

void plas(void){
  a=pop();
  b=pop();
  c=a+b;
  push(c);

}

void min(void){
  a=pop();
  b=pop();
  c=a+b;
  push(c);
}

void times(void){
  a=pop();
  b=pop();
  c=a+b;
  push(c);
}