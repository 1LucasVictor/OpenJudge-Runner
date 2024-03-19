#include <stdio.h>
int main(void) {
  int N;
  scanf("%d", &N);
  int A[N];
  int seCnt = 0;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
    if (A[i] % 2 == 0) {
      seCnt++;
      if ((A[i] % 3 == 0 || A[i] % 5 == 0)) {
        cnt++;
      }
    }
  }
  if (seCnt == cnt) {
    printf("APPROVED\n");
  } else {
    printf("DENIED\n");
  }
  return 0;
}