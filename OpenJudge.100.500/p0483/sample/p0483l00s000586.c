#include <stdio.h>

int main(void) {
  int n,d,check;
  scanf("%d",&n);
  while(d!=7&&n>0){
    d=n%10;
    n=n/10;
  }
  if(d==7)
    printf("Yes");
  if(d!=7)
    printf("No");
}