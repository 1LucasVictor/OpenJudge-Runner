#include<stdio.h>
 
int main(void)
{
  float x,y,z;
   
  scanf("%f",&x);
  
  scanf("%f",&y);
  
  z=(4*x-y)/2;
  
  if(z>=0&&z<=x)
  {
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}