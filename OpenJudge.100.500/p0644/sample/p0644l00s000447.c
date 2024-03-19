#include<stdio.h>

int main(){
  int N, count = 0;
  
  scanf("%d", &N);
  
  while(N >= 1){
    if(N%10 == 1){
      count++;
    }
    N = N/10;
  }
  
  printf("%d\n", count);
  
  return 0;
}