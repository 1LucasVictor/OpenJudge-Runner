#include <stdio.h>

int main(){
  int N, A[200001];
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &A[i]);
    for(int j=0; j<i; j++){
      if(A[i]==A[j]){
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}