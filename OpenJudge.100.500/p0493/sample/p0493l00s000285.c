#include<stdio.h>
int main()
{int X;
 int H=0;
 int Y;
 scanf("%d",&X);
 if(X<5)
 {
   printf("0");
 }
 while(X>500)
 {
   Y=X;
   Y=X/500;
   X=X%500;
   H=2*(500*Y);
 }
 while(X>5)
 {
  if((X>5)&&(X<500))
  {
    X=X/5;
    H=H+(5*X);
  }
 }
 printf("%d",H);
 return 0;
}
  
