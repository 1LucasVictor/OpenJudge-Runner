#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  int X;
  unused = scanf("%d", &X);

  if(X>=30) printf("Yes");
  else printf("No");
  return 0;
}