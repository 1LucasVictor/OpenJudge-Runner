#include<stdio.h>
#include<stdlib.h>

void push(int);
int pop();

int stack[100]={0};
int i=0;

int main(){
  char c[200];
  int sum=0;

  while(scanf("%s",c)!=EOF){
    if(c[0]=='+') stack[i]=pop()+pop();
    
    else if(c[0]=='-') stack[i]=pop()+pop();
    
    else if(c[0]=='*') stack[i]=pop()*pop();
    
    else push(atoi(c));
  }

  printf("%d\n",stack[i]);  
  return 0;
}

void push(int x){
  stack[i]=x;
  i++;
}

int pop(){
  i--;
  return stack[i];
}

