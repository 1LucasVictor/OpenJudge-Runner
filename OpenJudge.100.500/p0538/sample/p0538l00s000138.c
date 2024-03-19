#include<stdio.h>
int main(){
  int i,n;
  scanf("%d%d",&n,&i);
  if(i<10&&n<10){
    printf("%d\n",n*i);
  }
  else 
    printf("-1\n");
  return 0;}
