#include <stdio.h>
#include <math.h>
int main(void)
{
  int N = 0;
   
  scanf("%d", &N);
 
  if(N%2==0){
    printf("%d", N/2);
  }else{
    printf("%d", (N+1)/2);
  }
  
  return 0;
}
