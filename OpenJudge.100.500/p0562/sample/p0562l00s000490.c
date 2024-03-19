#include <stdio.h>
int main() {
  int A;
  int B;
  int N = 1;
  int ans;
  scanf("%d",&A);
  scanf("%d",&B);
  if (B==1) {
    printf("%d\n",0);
    return 0;
  }
  for (int i=1; i<20; i++) {
    if (1+(A*i)-i>=B) {
      printf("%d\n",i);
      break;
    }
  }
  return 0;
}
