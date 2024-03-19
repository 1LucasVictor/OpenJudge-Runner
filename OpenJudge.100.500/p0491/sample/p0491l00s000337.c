#include <string.h>
#include <stdio.h>
int main(void){
  int n=-1;
  int k=-1;
  scanf("%d",&n);
  scanf("%d",&k);
  n=n%k;
  if(n<k-n)printf("%d",n);
  else printf("%d",k-n);
  return 0;
}
