#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  int X, A, B;
  unused = scanf("%d %d %d", &X, &A, &B);

  if(B-A < 0) printf("delicious");
  else if(B-A <= X) printf("safe");
  else printf("dangerous");

  return 0;
}