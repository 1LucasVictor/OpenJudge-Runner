#include <stdio.h>
#include <string.h>
int pop();
void push(int );
int x[1000],top;
int main(){
  top=0;
  char c[100];
  int a,b;
  while(scanf("%s",c)!=EOF){
    if(c[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(c[0]=='-'){
      b=pop();
      a=pop();   
      push(a-b);
    }
    else if(c[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else{
      push(atoi(c));
    }
  }
  printf("%d\n",pop());
  return 0;
}
void push(int a){
  x[++top]=a;
}
int pop(){
  return x[top--];
}

