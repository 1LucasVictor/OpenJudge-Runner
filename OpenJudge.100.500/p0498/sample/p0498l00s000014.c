#include<stdio.h>
 
int main(void){
 
  int N;
  
  scanf("%d\n",&N);
 
 
  
  if(N%2==0){printf("%d\n",N/2);}
  else{printf("%d\n",(N+1)/2);}
 
  return 0;
 
}