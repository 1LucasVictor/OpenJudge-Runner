#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void push(int);

int top=0;
int S[1000];

int main(){
  char S[100];
  int top=0;
  int value1,value2;
 
  while(scanf("%s",S)!=EOF){
    
    if(S[0]=='+'){
      value1=pop();
      value2=pop();
      push(value1+value2);
    }
    else if(S[0]=='-'){
      value2=pop();
      value1=pop();
      push(value2-value1);

    }
    else if(S[0]=='*'){
      value1=pop();
      value2=pop();
      push(value1*value2);

    }
    else{
      push(atoi(S));
    }    
  }
 
  printf("%d\n",pop());

  return 0;
}

int pop(){
  top--;
  return S[top+1];
}

void push(int x){
  S[++top]=x;
}
  

