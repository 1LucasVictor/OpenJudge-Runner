#include"stdio.h"
int main(void){
  int N;
  scanf("%d",&N);
  int A[N];
  int i,j;
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      if(A[i]==A[j]){
        printf("NO\n");
        return 0;
      }
    }
  }
  printf("YES\n");
  return 0;
}
