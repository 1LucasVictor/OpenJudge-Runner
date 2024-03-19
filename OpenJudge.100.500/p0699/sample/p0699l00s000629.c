#include <stdio.h>
 
int main(void){
  
  int A,B,C;
  
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  
  if(A+B+C==17&&A==7||B==7||C==7&&A==B||B==C||C==A)
	printf("YES\n");
  else
   	printf("NO\n");
  
  return 0;
  
}
