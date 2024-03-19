#include<stdio.h>
int main(){
  
  int x,y,min,max,i=1;
  min = x;

  scanf("%d %d",&x,&y);
  
  if(x > y) min = y;
  
  while(i < min){
    if (x % i == 0 && y % i == 0) max = i; 
    i++;
  }

  printf("%d\n",max);
}
