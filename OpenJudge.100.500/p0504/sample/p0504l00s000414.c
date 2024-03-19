#include <stdio.h>

int main(){
  
  int		H, A;

  scanf("%d %d", &H, &A);
  
  if(H%A){ printf("%d", (H/A)+1); }
  else	 { printf("%d",  H/A);	  }  
  
  return 0;
}