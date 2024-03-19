#include<stdio.h>
#include<stdlib.h>

void main()
{
  long int X,h,a,b;
  
  scanf("%ld",&X);
  
  if(X%500==0)
  {
    h=(X/500)*1000;
  }
  else
  {
    a=X%500;
    b=a%5;
    
    h=(((X-a)/500)*1000)+(((a-b)/5)*5); 
  }
  printf("%ld",h);
}
      
