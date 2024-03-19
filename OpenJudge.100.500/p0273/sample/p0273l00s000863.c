#include<stdio.h>


int Fibonachi(int);

int main(){
  int x,a;

  scanf("%d",&x);

  a = Fibonachi(x);
  
  printf("%d\n",a);

  
  return 0;

}

int Fibonachi(int n){
  int ans;
  if(n == 0 || n == 1) return 1;

  else return Fibonachi(n-1)+Fibonachi(n-2);

}