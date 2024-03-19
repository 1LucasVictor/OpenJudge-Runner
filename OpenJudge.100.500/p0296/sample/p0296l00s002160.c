#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int top;
int result;

char S[MAX];

void initialize();

int isEmpty();
 
int isFull();

void push(int);

int pop();


int main(){
  char s;
  int hozon;

  initialize();
  while( scanf("%c",&s)!=EOF){

    
     if(s=='+'){
       push(pop()+pop());
     
     }
    
     else if(s=='-'){
       hozon=pop();
      push(pop()-hozon);
    }
   else if(s=='*'){
      push(pop()*pop());
    }
    
      
     else if(s<='9' && s>='0'){
      push(atoi(&s));
    }
    
   else if(s=='\n'){
       printf("%d\n",pop());
       break;
     
     }
    
    
  }

  return 0;
}

void initialize(){
  top=0;
}


int isEmpty(){
  return top;
}

int isFull(){
  return top;
}


void push(int s){
  if(isFull()>=(MAX-1))exit(0);

  top++;
  S[top]=s;
}

int pop(){
  if(isEmpty()==0)exit(0);

  top--;
  return S[top+1];
}

