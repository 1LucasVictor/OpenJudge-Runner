#include <stdio.h>
 
int main()
{
	  
   int A,B,C;
   
    scanf("%d", &A); 
    scanf("%d", &B);
    scanf("%d", &C);
  
  
  	if(C > 20) C=20;
  	if(C<1) C=1;
  	if(A > 20) A=20;
    if(B>A) B=A;
  
    if((A-B) > C){
      C = 0;
    }
    else{
      C = C - (A-B);
    }
  
  　printf("%d",C);
  
  return 0;
   
}
