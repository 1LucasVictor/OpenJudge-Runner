#include<stdio.h>
int main(){
  int a,b,c=1;
  scanf("%d %d",&a,&b);
  for(int i=0; i<a; i++){
    c*=100;
  }
  printf("%d",c*b);
  return 0;}