#include<stdio.h>
 
int main(void){
 
  int b=0,c1=0,c2=0,z=0;
  double x,y;
  
  scanf("%d %d",&c1,&c2);
 
  for(z=0;z <= c1;z++){
    b = c1 - z;
    if(2*z + 4*b == c2){
      printf("Yes");
      break;
    }
    else if(z == c1){
      printf("No"); 
    }  
  }
 return 0;
  
}