#include<stdio.h>
int main()
{
  int x=0,y=0;
  scanf("%d%d",&x,&y);
  
  if(y%2!=0)
  {
    printf("No");
  }else if(y<x*2||y>4*x){
    printf("No");
  }else{
    printf("Yes");
  };
  return 0;
           };
    