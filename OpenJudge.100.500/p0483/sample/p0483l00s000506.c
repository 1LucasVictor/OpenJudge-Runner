#include<stdio.h>

int main(void){
  int N; scanf("%d",&N);

  if(N/100 == 7){
    printf("Yes");
  }
  else if((N%100)/10 == 7){
    printf("Yes");
  }
  else if(N%10 == 7){
    printf("Yes");
  }
  else{
    printf("No");
  }

  return 0;
}
