#include <stdio.h>
 
int main(){
  int	a;
  
  scanf("%d", &a);
  if	 ( a==  0 					  ){ printf("0"); }
  else if( a==  1 || a== 10 || a==100 ){ printf("1"); }
  else if( a== 11 || a==101 || a==110 ){ printf("2"); }
  else if( a==111 					  ){ printf("3"); }
 
  return 0;
}