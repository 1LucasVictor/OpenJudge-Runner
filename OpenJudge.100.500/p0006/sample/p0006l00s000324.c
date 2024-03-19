#include<stdio.h>

int main(void){
  int x=100000;
  int i,n;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    x=x*1.05;
  }
  if(x%10000!=0){
    x=x+10000;
  }
  x=x/10000;
  x=x*10000;
  printf("%d\n",x);
  return(0);
}