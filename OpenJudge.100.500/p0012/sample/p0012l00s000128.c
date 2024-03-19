#include <stdio.h>
const int SIZE = 100;
int data[SIZE];
int sp = 0;
int empty(){
    return sp <= 0;
}
int size(){
    return sp;
}
int top(){
    return data[sp-1];
}
void pop(){
    sp--;
}
void push(int n){
     data[sp] =n;
      sp++;
}
int main(){
  int n;
  while(scanf("%d",&n)!=EOF){
    if(n==0){
      printf("%d\n",top());
      pop();
    }else{
      push(n);
    }
  }
  return 0;
}