#include <stdio.h>
#include <stdlib.h>

int f(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}

int main(){
  int H,N,A;
  scanf("%d %d",&H,&N);
  for(int i=1;i<=N;i++){
    scanf("%d",&A);
    H-=A;
    if(H<=0){
      printf("Yes\n");
      break;
    }  
  }
  if(H>0) printf("No\n");
  return 0;
}