#include <string.h>
#include <stdio.h>
int main(void){
  int n=-1;
  int k=-1;
  int a,b;
  while(n<0 || n>1000000000000000000){scanf("%d",&n);}
  while(k<1 || k>1000000000000000000){scanf("%d",&k);}
  n=n-(n/k)*k;
  a=n;
  b=k-n;
  if(a<b)printf("%d",a);
  else printf("%d",b);
  return 0;
}
