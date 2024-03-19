#include<stdio.h>
int main(void){
  
  int num; 
  if(scanf("%d",&num)){
 
    if( (num+3)%10==0 || (num+30)%100==num%10 || (num+300)%1000==num%100 ){
      printf("Yes");
    }
    else{
      printf("No"); 
    }
  }
   
  return 0;
}