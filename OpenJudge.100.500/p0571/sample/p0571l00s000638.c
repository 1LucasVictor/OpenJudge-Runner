#include<stdio.h>

int cheap(int a,int b){
  if(a<=b){
    return a;
  }else{
    return b;
  }
}

int main(void){
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);
  printf("%d\n",cheap(n*a,b));
  return 0;
}