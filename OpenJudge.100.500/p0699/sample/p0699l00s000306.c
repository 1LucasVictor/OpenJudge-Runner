#include <stdio.h>

int main() {
  int hist[16] = { 0 };
  int A, B, C;
  
  scanf("%d %d %d", &A, &B, &C);
  hist[A]++;
  hist[B]++;
  hist[C]++;
  
  if(hist[5] == 2 && hist[7]==1) printf("YES\n");
  else printf("NO\n");
  
  return 0;
}
  