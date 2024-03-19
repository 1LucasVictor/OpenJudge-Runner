#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf((a%2*b%2)?"Odd":"Even");
  return 0;
}