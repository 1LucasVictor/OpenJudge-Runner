#include<stdio.h>

int top=0;
int push(int);
int pop(void);

int main(){

  int x,y,z;
  char d[100];

  while(scanf("%s",d)!=EOF){

    if(d[0]=='+'){
      x=pop();
      y=pop();
      push(x+y);
    }

    else if(d[0]=='-'){
      x=pop();
      y=pop();
      push(x-y);
    }

    else if(d[0]=='*'){
      x=pop();
      y=pop();
      push(x*y);
    }

    else{
      z=atoi(d);
      push(z);
    }

  }

    printf("%d\n",pop());
    return 0;
}

int d[100];

int push(int n){
  d[top++]=n;
  return n;
}

int pop(void){
  return d[--top];
}