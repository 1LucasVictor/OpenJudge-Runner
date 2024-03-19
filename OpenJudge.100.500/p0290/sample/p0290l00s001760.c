#include <stdio.h>

#define N 10000

int main(){
  int A[N] = {0};
  int length;
  int i = 0, flag = 0;
  int j;
  int count = 0;
  
  scanf("%d", &length);
  while(i < length){
    scanf("%d", &A[i]);
    i++;
  }
  
  for(i = 0; i < length; i++){
    flag = 0;
    
    for(j = 2; j <= A[i]-1; j++){
      if(A[i]%j == 0){
	flag = 1;
	break;
      }
    }
    
    if(flag == 0){
      count++;
    }
  }
  printf("%d", count);
  return 0;
}

