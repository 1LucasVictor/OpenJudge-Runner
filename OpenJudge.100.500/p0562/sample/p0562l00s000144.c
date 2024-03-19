#include<stdio.h>
 
int main(void){
  int A,B,i=0;
  scanf("%d %d",&A,&B);
 int out=1;
  while(out<B){
    out--;
    out+=A;
    i++;
  }
    
  printf("%d\n",i);
      
      
  return 0;
}