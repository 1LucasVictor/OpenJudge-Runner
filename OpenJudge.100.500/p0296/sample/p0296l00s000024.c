#include<stdio.h>
#include<stdlib.h>

#define N 101

int top,S[N];

int pop(){
  if(top==0){
    fprintf(stderr,"stack is empty\n");
    exit(2);
  }
  return S[top--];
}

void push(int a){
  if(top==100){
    fprintf(stderr,"stack over flow\n");
    exit(1);
  }
  S[++top]=a;
}

int main(){
  int num,a;
  char in[1000000];
  
  S[top]=NULL;
  
  while(scanf("%s",&in)!=-1){
    if(in[0]==42||in[0]==43||in[0]==45){
      switch(in[0]){
      case 42:
	push(pop()*pop());
	break;
      case 43:
	push(pop()+pop());
	break;
      case 45:
	a=pop();
	push(pop()-a);
	break;
      }
    }else{
      push(atoi(in));
    }
  }
  printf("%d\n",S[top]);
  return 0;
}

