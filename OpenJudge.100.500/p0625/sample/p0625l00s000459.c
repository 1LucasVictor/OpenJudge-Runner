#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  int A, B;
  unused = scanf("%d %d", &A, &B);

  if(A%2==1 && B%2==1) printf(":(");
  else if(A>8 || B>8) printf(":(");
  else printf("Yay!");
  return 0;
}