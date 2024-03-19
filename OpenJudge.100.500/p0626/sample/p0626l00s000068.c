#include<stdio.h>
int main(void){
  int d,n,i;
  int num = 1;
  
  scanf("%d %d",&d,&n);
  
  if(d == 1){
    num = 100 * n;
  }
  else if(d == 2){
    num = 10000 * n;
  }
  else{
    num = n;
  }
  printf("%d",num);
  
  return 0;
}