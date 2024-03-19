#include<stdio.h>
int main(void){
  int N, i, c = 0;
  scanf("%d", &N);
  int A[N];
  for(i = 0; i < N; i++){
    scanf("%d", &A[i]);
  }
  for(i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      if(A[i] == A[j]) c += 1;
    }
  }

  if(c != 0) printf("NO\n");
  else printf("YES\n");


  return 0;
}