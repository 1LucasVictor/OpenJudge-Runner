#include <stdio.h>

void Do(int H, int N){
  int i, A, S;
  S = 0;
  for(i = 0;i < N;i++){
    scanf("%d", &A);
    S += A;
  }
  if(S >= H) printf("Yes\n");
  else printf("No\n");
}

int main(void){
  int H, N;
  scanf("%d %d", &H, &N);
  Do(H, N);
  return 0;
}
