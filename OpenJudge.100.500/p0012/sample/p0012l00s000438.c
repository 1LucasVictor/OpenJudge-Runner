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
  int a;
  while(scanf("%d",&a)!=EOF){
    if(a==0)printf("%d\n",pop());
    else push(a);
  }
  return 0;
}