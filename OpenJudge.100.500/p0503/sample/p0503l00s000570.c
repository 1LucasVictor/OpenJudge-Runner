#include <stdio.h>
#include <math.h>
 
int main(){
  int N;
  scanf("%d", &N);
  int A[N];
  int i;
  for (i = 0; i < N; i++) {
    A[i] = 0;
    scanf("%d", &A[i]);
  }
  for (i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if ( A[i] == A[j] ) {
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}