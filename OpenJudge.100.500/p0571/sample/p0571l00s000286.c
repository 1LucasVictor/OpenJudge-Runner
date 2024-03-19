#include <stdio.h>
int main() {
  int N,A,B;
  scanf("%d %d %d",&N,&A,&B);
  if (A*N<=B) {
    printf("%d",A*N);
  }else{
    printf("%d\n",B);
  }
  return 0;
}
