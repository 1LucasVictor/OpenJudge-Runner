#include <stdio.h>

int main(void){
  int N,H,a=0;
  scanf("%d %d",&H,&N);
  
  int A[N];
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  
  for(int i=0;i<N;i++){
    a=a+A[i];
  }
  
  if(a>=H){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  
  return 0;
}