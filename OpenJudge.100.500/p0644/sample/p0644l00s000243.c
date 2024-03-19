#include<stdio.h>

int main(){
  int a,A;
  A=0;
  scanf("%d",&a);
  if(a==111){
    A=3;
  }
  if(a==110 || a==101 || a==011){
    A=2;
  }
  if(a==100 || a==010 || a==001){
    A=1;
  }
  printf("%d\n",A);
  return 0;
}