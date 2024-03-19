#include <stdio.h>
int a[22];
int sp=0;
int push(int x){
  sp++;
  a[sp]=x;
}
int pop(){
  int x;
  x=a[sp];
  sp--;
  return x;
}
int main(){
  int x;
  while(scanf("%d",&x)!=EOF){
    if(x==0)printf("%d\n",pop());
    else push(x);
  }
  return 0;
}