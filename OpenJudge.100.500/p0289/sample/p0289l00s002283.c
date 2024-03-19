#include<stdio.h>

int GCD(int x,int y){
  return y ? GCD(y,x%y):x;
}

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",GCD(a,b));

  return 0;
}
