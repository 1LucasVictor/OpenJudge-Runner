#include<stdio.h>
int main(void){
  
  int num; 
  scanf("%d",&num);
 
  if( (num+3)%10==0 || (num+30)%100==0 || (num+300)%1000==0 ){
    printf("Yes");
  }
  else{
    printf("No"); 
  }
   
  return 0;
}