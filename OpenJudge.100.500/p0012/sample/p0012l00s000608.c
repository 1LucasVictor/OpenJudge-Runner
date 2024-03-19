#include<stdio.h>

int s[11];
int top=0;


void push(int x){
  top++;
  s[top]=x;
}
int pop(){
  top--;
  return s[top+1];
}

int main(){
  int y,a;
  while(scanf("%d",&y)!=EOF){
    if(y==0){
      a=pop();
    printf("%d\n",a);
    }else{
      push(y);
    }
  }
  return 0;
}