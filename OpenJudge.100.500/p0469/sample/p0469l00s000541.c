#include <stdio.h>
#include <string.h>


int main(void){
	int K,A,B;
  
  scanf("%d", &K);
  scanf("%d %d", &A, &B);
  
  for(int i = A; i<=B; i++){
    if(i % K == 0){
      printf("OK\n");
      return 0;
    }
  }
  printf("NG\n");
    

  return 0;
}

