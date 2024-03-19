#include<stdio.h>

int main()
{
  int A,B,flag=0;
  
  scanf("%d",&A);
  scanf("%d",&B);
  
 if(B%A==0)
 {
   flag=1;
 }
     
  if(flag)
  {
    printf("%d",A+B);
  }
  else
  {
    printf("%d",B-A);
  }
  
  return 0;
}