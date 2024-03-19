#include <stdio.h>
int main(void){
  int n,a,b,c;
  scanf("%d",&n);
  a=n/100;
  n=n%100;
  b=n/10;
  n=n%10;
  c=n;
  if(a==7||b==7||c==7)
    printf("Yes");
  else printf("No");
  return 0;
}