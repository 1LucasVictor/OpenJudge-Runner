#include<stdio.h>
#include<stdlib.h>
#define MAX 199
void initalize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);
int S[MAX];
int top;
int main(){
  int y1,y2;
  char x[100];
  while( scanf("%s", x) != EOF ){
    if ( x[0] == '+' ){
      y1=pop();
      y2=pop();
      push(y1+y2);
      
    } else if ( x[0] == '-' ){
      y2=pop();
      y1=pop();
      push(y1-y2);
      
    } else if ( x[0] == '*' ){
      y1=pop();
      y2=pop();
      push(y1*y2);
      
    } else {
      y1 = atoi(x);
      push(y1);
    }
  }
    printf("%d\n",pop());
    return 0;
    
  
}

void intialize(void){
  top = 0;
}

int isEmpty(){
  if(top==0)return 0;
  else return 1;
}

int isFull(){
  if(top>=MAX-1)return 1;
  else return 0;
}

void push(int x){
  if(isFull()==1){
    fprintf(stderr,"??¨??????????????????????????????)\n");
    exit(8);
  }
  top++;
  S[top] = x;
}

int pop(void){   
  if(isEmpty()==0){
    fprintf(stderr,"??¨???????????¢?????????????????????\n");
    exit(8);
  }
  top--;
  return S[top+1];
}