#include <stdio.h>
#include <stdlib.h>

int isEmpty();
void push(int);
int pop();

int top=0,s[100];

int main(){
  int t1,t2;
  char c[10];

  while(scanf("%s",c)!=EOF){
    if(c[0]=='+'||c[0]=='-'||c[0]=='*'){
      t1=pop();
      t2=pop();
      if(c[0]=='+')t2+=t1;
      else if(c[0]=='-')t2-=t1;
      else if(c[0]=='*')t2*=t1;
      push(t2);
    }
    else push(atoi(c));
  }
  printf("%d\n",pop());
  return 0;
}

int isEmpty(){
  if(top==0)return 1;
  else return 0;
}

void push(int x){
  top++;
  s[top]=x;
}

int pop(){
  if(isEmpty()){
    fprintf(stderr,"underflow\n");
    exit(1);
  }
  else {
    top--;
    return s[top+1];
  }
}