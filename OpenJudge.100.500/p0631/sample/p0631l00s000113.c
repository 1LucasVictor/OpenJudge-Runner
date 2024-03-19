#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  int A, B, X;
  unused = scanf("%d %d %d", &A, &B, &X);

  if(X < A) printf("NO");
  else if(X >= A && X-A <= B) printf("YES");
  else printf("NO"); 
  return 0;
}