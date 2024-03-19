#include<stdio.h>
#define N 5

int main(void){
  int i,j,k;
  int input[N];
  int flag = 0;
  
  for(i=0; i<N; i++){
    scanf("%d",&input[i]);
  }
  scanf("%d",&k);
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if((input[j]-input[i]) > k){
        flag = 1;
      }
    }
  }
  
  if(flag == 0){
    printf("Yay!\n");
  }else{
    printf(":(\n");
  }
  
  return 0;
}
