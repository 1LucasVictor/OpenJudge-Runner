#include<stdio.h>
int main(void)
{
  int A,B,C,left;
  
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  
  if(C>A-B){
  left = C-(A-B);
  }
  else{
    left = 0;
  }
  
  printf("%d",left);
  
  return 0;
}