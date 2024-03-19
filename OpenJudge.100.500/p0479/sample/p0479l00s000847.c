#include<stdio.h>
int main(){
  int N;
  int A[200010];
  int AN[20010];
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &A[i]);
  }
  for(int k=0;k<N; k++){
    for(int m = 0; m<N; m++){
      if(k+1 == A[m]){
        AN[k] +=1;
      }
    }
  }
  for(int j=0; j<N;j++){
    printf("%d\n",AN[j]);
  }
  return 0;
}