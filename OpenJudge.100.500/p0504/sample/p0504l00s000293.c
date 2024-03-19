#include <stdio.h>
#include <string.h>
int main() {
  int H,N;
  int count = 0;
  scanf("%d %d",&H, &N);
  while(H > 0) {
    H -= N;
    ++count;
  }
  printf("%d\n",count);
  return 0;
}