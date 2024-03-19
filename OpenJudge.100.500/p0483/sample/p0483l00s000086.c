#include <stdio.h>

int main(void){
  long int K;
  int c = 0;
  scanf("%ld",&K);
  for(int i = 0;i < 3;i++){
    if(K%10==7){
      c++;
    }
    K=K/10;
  }
  if(c > 0){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}
