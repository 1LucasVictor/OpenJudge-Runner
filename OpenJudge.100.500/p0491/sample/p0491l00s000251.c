#include <stdio.h>
#include <stdlib.h>
int main (void){
  int n,k;
  if(scanf("%d%d",&n,&k)<2)exit(1);
  while(abs(n-k)<n){
    n = abs(n-k);
  }
  printf("%d",n);
  return 0;
}
