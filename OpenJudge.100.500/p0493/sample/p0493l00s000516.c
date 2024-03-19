#include <stdio.h>
int main()
{
  int X;
  int B=0;
  int C=0;
  int D=0;
  int E=0;
  scanf("%d",&X);
  
  if(X>=500){
    B=X/500;
    C=X%500;
    D=B*1000+(C/5)*5;
      printf("%d",D);
  }
  else{
      E=(X/5)*5;
      printf("%d",E);
    }
  return 0;
}