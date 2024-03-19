#include <string.h>
#include <stdio.h>
int main(void){
  int n=-1;
  int k=-1;
  int a,b;
  scanf("%d",&n);
  scanf("%d",&k);
  n=n-(n/k)*k;
  a=n;
  b=k-n;
  if(a<b)printf("%d",a);
  else printf("%d",b);
  return 0;
}
