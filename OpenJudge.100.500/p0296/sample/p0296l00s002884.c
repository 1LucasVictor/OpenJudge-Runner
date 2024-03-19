#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
void push(int);
int pop();
int isEmpty();
int isFull();

int top,S[MAX];


void push(int s){
  if(isFull() == 1){
    fprintf(stderr, "エラー\n");
    exit(8);
  }
  else S[++top]=s;
}

int pop(){
  if(isEmpty() == 0){
    fprintf(stderr, "エラー\n");
    exit(8);
  }
  else{
  top--;
  return S[top+1];
  }
}

int isFull(){
  if(top>=MAX-1)return 0;
  else return 0;
}

int isEmpty(){
  if(top==0)return 0;
  else return 1;
}


int main(){
  char s[100];
  int hozon;
  
  
  while( scanf("%s",s)!=EOF){

    if(s[0]=='+'){
      push(pop()+pop());
    }
    else if(s[0]=='-'){
      hozon=pop();
      push(pop()-hozon);
    }
    else if(s[0]=='*'){
      push(pop()*pop());
    }
    else push(atoi(s));
  }
  printf("%d\n",pop());
	

  return 0;
}


