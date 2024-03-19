#include <stdio.h>

int main() {
  int H, N, i, A, total;
  scanf("%d", &H);
  scanf("%d", &N);
  for (i = 0; i < N; i++) {  scanf("%d", &A); total += A; }
  puts( (H > total)? "No":"Yes");
}
