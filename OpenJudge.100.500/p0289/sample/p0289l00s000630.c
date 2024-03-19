#include<stdio.h>
int main(void){
  int x,y,i,j;
  
  scanf("%d %d",&x,&y);
  
  
  if(x<y){
    j = x;
    x = y;
    y = j;
  }
  
  
  i = x%y;
  while(i!=0){
    x = y;
    y = i;
    i = x%y;
  }
  printf("%d\n",y);
  return 0;
}

