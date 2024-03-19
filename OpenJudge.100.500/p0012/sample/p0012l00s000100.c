#include<stdio.h>
int stack[10];
int i=0;
void push(int x);
void pop(void);
int main(){
  int x;
  while(scanf("%d",&x)!=EOF){
    if(x==0)pop();
    else push(x);
  }
  return(0);
}
void push(int x){
  stack[i]=x;
  i++;
}
void pop(void){
  i--;
  printf("%d\n",stack[i]);
}