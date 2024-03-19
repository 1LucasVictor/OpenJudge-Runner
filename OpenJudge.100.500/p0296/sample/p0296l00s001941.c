#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 1000
int S[MAX],top;

int isEmpty(){
  return top==0;
}

int isFull(){
  return top>=MAX-1;
}

void push(int x){
  if(isFull()){
    printf("Stack overflow\n");
    exit(2);
  }
  top++;
  S[top]=x;
}

int pop(){
  if(isEmpty()){
    printf("Stack is Empty\n");
    exit(3);
  }
  top--;
  return S[top+1];
}

int main(){
  int x,a,b;
  char s[100];
  top=0;
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
  }
    else if(s[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(s[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else push(atoi(s));
  }
  printf("%d\n",pop());
  return 0;
}
    

