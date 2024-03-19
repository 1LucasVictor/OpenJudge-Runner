#include<stdio.h>
int main(void){
  int A=0,B=0;
  scanf("%d %d",&A,&B);
  
  if(B%A==0){printf("%d\n",A+B);}
  else{printf("%d\n",A-B);}
  
  return 0;
}