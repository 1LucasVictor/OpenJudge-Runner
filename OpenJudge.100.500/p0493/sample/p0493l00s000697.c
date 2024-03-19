#include <stdio.h>
int main(void){
int c=0;
int max,min; 
  
  scanf("%d",&c);
  max=c/500;
  min=(c%500)/5;
  printf("%d",max*1000+min*5);
  
  return 0; 
}
