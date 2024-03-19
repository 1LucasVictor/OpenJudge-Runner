#include <stdio.h>
#include <stdlib.h>
#define MAX 200

int top=0;

char S[MAX];

void push(int);

int pop();


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

    }
    
    if(s=='\n'){
      printf("%d\n",pop());
      break;
    }
    
      

  }
	

  return 0;
}

void push(int s){
  top++;
  S[top]=s;
}

int pop(){
  top--;
  return S[top+1];
}

