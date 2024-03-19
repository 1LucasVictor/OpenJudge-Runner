#include <stdio.h>
#include <math.h>
int main(void)
{
 
  int A[3];
  
  for(int i=0; i < 3; i++){
  scanf("%d", &A[i]);
  }
    
  for(int i = 0; i < 2; i++){
   for(int j = 0; j < 2; j++){
     if(A[j] > A[j+1]){
       int tmp;
       tmp = A[j+1];
       A[j+1] = A[j];
       A[j] = tmp;
     }
   }
  }
    
  if(A[0] == 5 && A[1] == 5 && A[2] == 7){
    printf("YES");
  }else{
    printf("NO");
  }
  
  return 0;
}