#include <string.h>
#include <stdio.h>
int main(void){
  int n=-1;
  int k=-1;
  scanf("%d%d",&n,&k);
  if(n%k<k-n%k)printf("%d",n%k);
  else printf("%d",k-n%k);
  return 0;
}