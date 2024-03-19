#include <stdio.h>
int main(){
  int N,n;
  scanf("%d",&n);
  N=n/2;
  if(N%2==0)
    N++;
  printf("%d\n",N);
  return 0;
  }