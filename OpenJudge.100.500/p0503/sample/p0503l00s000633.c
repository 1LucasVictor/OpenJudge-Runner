#include <stdio.h>
 
int main() {
  int N;
  if (scanf("%d", &N) == 1) {
    N=N;
  };
  int A[N];
  for (int i = 0; i < N; i++) {
    if (scanf("%d", &(A[i])) == 1) {
      N=N;
    }; 
 
    for (int j = 0; j < i; j++) {
      if (A[j] == A[i]) {
        printf("NO\n");
        return 0;
      }
    }
  }
 
  printf("YES\n");
  
  return 0;
}

 