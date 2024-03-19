#include <stdio.h>

int main(){

  short	N;
  short x;
   
  
  scanf("%d", &N);
  
  x = N % 100;
  x = x % 10;
  
  if	 ( x==2 || x==4 || x==5 || x==7 || x==9 ){ printf("hon"); }
  else if( x==0 || x==1 || x==6 || x==8 )		 { printf("pon"); }
  else											 { printf("bon"); }
  
  return 0;
  
}