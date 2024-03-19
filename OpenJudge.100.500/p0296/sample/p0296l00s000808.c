#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 200

int S[MAX];
int top=0;

bool isEmpty(){
  if(top ==0){
    return true;
  }
  else return false;
}

void push(int x){
  top++;
  S[top]=x;
}

int pop(){
  if(isEmpty()){
    fprintf(stderr,"underflow\n");
    exit(EXIT_FAILURE);
    
  }
  else{
    top = top-1;
    return S[top+1];
  }
}





int main () {
  char met[MAX];
  int a,b;
  while(scanf("%s",met)!=EOF){

    if(met[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(met[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(met[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else push(atoi(met));
  }

  printf("%d\n",pop());

  return 0;
}
      
      

