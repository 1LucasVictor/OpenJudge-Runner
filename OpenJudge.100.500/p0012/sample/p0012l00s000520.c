#include<stdio.h>
int top=0;
  int S[11];
void push(int x){
  top++;
  S[top]=x;
}
 int pop(){
    top--;
    return S[top+1];
 }
int main(){

  int y,t;
    while (scanf("%d",&y)!=EOF){
    if(y!=0){
      push(y);
    }else {
      t=pop();
      printf("%d\n",t);
    }
  }
  return 0;
}