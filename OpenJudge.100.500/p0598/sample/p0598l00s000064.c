#include<stdio.h>

int main(){
  int A,B;
  scanf("%d %d", &A, &B);

  if (B%A) printf("%d", B-A);
  else printf("%d", A+B);
  return 0;
}