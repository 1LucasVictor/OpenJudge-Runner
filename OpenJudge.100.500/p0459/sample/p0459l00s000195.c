#include<stdio.h>
 
int main(void)
{
  
  int x,y,i,a;
  
  scanf("%d%d",&x,&y);
  
  for(i=0;i<=x;i++){
      a=x-i;
      if(4*i+2*a==y){
         printf("Yes\n");
         return 0;
      }
  }
  printf("No\n");
  
  return 0;
}