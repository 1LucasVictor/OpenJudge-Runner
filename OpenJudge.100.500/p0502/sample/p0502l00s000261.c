#include <stdio.h>
#include <math.h>
int main(void)
{
  int N = 0;
   
  scanf("%d", &N);
 
  int A[N];
  
  for(int i=0; i < N; i++){
  scanf("%d", &A[i]);
  }
  
  for(int i=0; i < N; i++){
  if(A[i] % 2 != 0){
    A[i] = 0;
    }  
  }
    
  int ans = 0;
  
  for(int i=0; i < N; i++){
    if(A[i] % 3 != 0 && A[i] % 5 != 0){
      ans ++;
    }
  }
    
  if(ans != 0){
    printf("DENIED");
  }else{
    printf("APPROVED");
  }
  return 0;
}
