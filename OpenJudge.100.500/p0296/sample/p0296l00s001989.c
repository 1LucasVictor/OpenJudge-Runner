#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int top=0;

char S[MAX];

void push(int);

int pop();

int isEmpty();

int isFull();


int main(){
  char s;
  int hozon;
  
  while( scanf("%c",&s)!=EOF){

    switch(s){
    case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
      push(atoi(&s));
      break;
      
    case '+':
      push(pop()+pop());
      break;

    case '-':
      hozon=pop();
      push(pop()-hozon);
      break;

    case '*':
      push(pop()*pop());
      break;

    case '\n':
      if(top!=1)exit(1);
       printf("%d\n",pop());
       exit(1);

    }
  }
	

  return 0;
}

void push(int s){
  if(isFull() == 1){
    fprintf(stderr, "エラー\n");
    exit(8);
  }
  S[++top]=s;
}

int pop(){
  if(isEmpty() == 0){
    fprintf(stderr, "エラー\n");
    exit(8);
  }
  top--;
  return S[top+1];
}

int isFull(){
  if(top>=MAX-1)return 0;
  else return 0;
}

int isEmpty(){
  if(top==0)return 0;
  else return 1;
}

