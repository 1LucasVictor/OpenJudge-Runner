#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N1 1000
#define N2 100
int get,A[N1];

void push(int x){
  A[++get]=x;
}
 
int pop(){
  get--;
 
  return A[get+1];
}
 
int main(){
  char a[N2];
  int x=0,y=0;
  get=0;
 
 
  while(scanf("%s",a)!=EOF){
    if(a[0]=='+'){
      x=pop();
      y=pop();
      push(y+x);
    }else if(a[0]=='-'){
      x=pop();
      y=pop();
      push(y-x);
    }else if(a[0]=='*'){
      x=pop();
      y=pop();
      push(x*y);
    }else {
      push(atoi(a)); 
    }
  }
 
  printf("%d\n",pop());
 
  return 0;
}

