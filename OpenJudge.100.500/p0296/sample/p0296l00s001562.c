#include<stdio.h>
#include<stdlib.h>
#define N 100
#define M 1000
int top,S[M];

void push(int x){
  top++;
  if(top==M-1){
    fprintf(stderr,"over flow\n");
    exit(1);
  }
  S[top]=x;
}

int pop(){
  top--;
  if(top<0){
    fprintf(stderr,"empty\n");
    exit(2);
  }
  return S[top+1];
}

int main(){
  char num[N];
  top=0;
  int a,b;
  while(scanf("%s",num)!=EOF){
    if(num[0]=='+'){
      a=pop();
      b=pop();
      push(b+a);
    }
    else if(num[0]=='-'){
      a=pop();
      b=pop();
      push(b-a);
    }
    else if(num[0]=='*'){
      a=pop();
      b=pop();
      push(b*a);
    }
    else push(atoi(num));
  }
  printf("%d\n",pop());
  return 0;

}

