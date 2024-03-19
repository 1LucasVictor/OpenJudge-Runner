#include<stdio.h>
int main(){
  int N; int i,j;
  int mis = 0;
  scanf("%d", &N);
  char A[N];
  for(i=0;i<N;i++){
    scanf("%d",&j);
    A[i]=j;
    if(j % 2 == 0){
      if((j % 3 != 0) && (j % 5 != 0))
        mis++;
    }
  }
  if(mis == 0){
    printf("APPROVED");
  }else{
    printf("DENIED");
  }
  return 0;
}
  