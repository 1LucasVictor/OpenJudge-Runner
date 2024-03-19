#include<stdio.h>

int F(int);
int a;
int main(void){
  int n;

  scanf("%d",&n);
  if(n<0 || n>44)printf("error\n");
  F(n);
  printf("%d\n",a);
  return 0;
}

F(n){
  if(n == 0 || n == 1){
    // a=1;
    return a=1;
  }
  else {
    // a=F(n-1)+F(n-2);
    return a=F(n-1)+F(n-2);
  }
  return 0;
}