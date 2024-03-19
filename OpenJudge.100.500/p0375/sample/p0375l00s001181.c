#include<stdio.h>
int main(){

  int i,j,a,b;
  scanf("%d",&a);
  for(i=1;i<=a;i++){
    if(i%3==0)printf(" %d",i);
    else if(i%10==3||i/10==3||i/10%10==3)printf(" %d",i);
  }
  printf("\n");
  return 0;
}