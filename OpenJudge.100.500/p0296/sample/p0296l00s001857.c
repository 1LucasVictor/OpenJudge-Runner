#include <stdio.h>
#include <stdlib.h>

int top=0,S[100];

void push(int);
int pop();
int isEmpty();

int main(){
  int a,b,n;
  char s[100];
  
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
    else{
    n=atoi(s);
    push(n);
    }
  }
  printf("%d\n",S[1]);
  return 0;
}
int isEmpty(){
  return top==0;
}
void push(int x){
  top+=1;
  S[top]=x;
}
int pop(){
  if (isEmpty()) fprintf(stderr,"underflow\n");
  else
    top-=1;
  return S[top+1];
}