#include <stdio.h>

int main(void){
  int K,A,B;
  
  scanf("%d", &K);
  scanf("%d", &A);
  scanf("%d", &B);
  
  int i,j;
  
  if(K>=1 && K<=1000 && A>=1 && A<=1000 && B>=1 && B<=1000 && A<=B && K<=B){
    for(i=1; i*K<=B; i++){
      if(A<=i*K && i*K<=B){
        puts("OK");
      if(A<=(i+1)*K && (i+1)*K<=B)
        break;
      }
    }
    
    for(j=1; j*K<=B; j++){
      if(B<(j+1)*K){
        if(A<=j*K && j*K<=B)
          break;
        else
          puts("NG");
      }
    }
    
  }
  else{
    puts("NG");
  }
  
  return 0;
}