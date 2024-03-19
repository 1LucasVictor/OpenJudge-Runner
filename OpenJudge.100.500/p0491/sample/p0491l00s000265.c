#include <string.h>
#include <stdio.h>
int main(void){
  int n=-1;
  int k=-1;
  while(n<0 || n>1000000000000000000){scanf("%d",&n);}
  while(k<1 || k>1000000000000000000){scanf("%d",&k);}
  n=n%k;
  if(n<k-n)printf("%d",n);
  else printf("%d",k-n);
  return 0;
}
