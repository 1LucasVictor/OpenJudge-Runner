#include <stdio.h>
int main() {
  int K,A,B;
  scanf("%d\n", &K);
  scanf("%d %d\n", &A, &B);
  
  if(K < A && (2*K > B) ){
    
          printf("NG");
    
  }else if(K > B ){
    
    printf("NG");
    
  }else{
      printf("OK");
  }
  return 0;
}