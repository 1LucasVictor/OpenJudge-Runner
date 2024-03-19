#include<stdio.h>
#include<stdlib.h>

int S[1000],top=0;

void push(int);
int pop(void);

int main(){
  char cal[100];
  int i=0;
  int a,b;
  while(scanf("%s",cal)!=EOF){
    if(cal[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(cal[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(cal[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
  else{
    push(atoi(cal));
  }
  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){
  S[++top]=x;
}
int pop(void){
  top--;
  return S[top+1];
}

