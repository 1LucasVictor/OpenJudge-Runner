#include <stdio.h>
signed main(){
  int N,M;
  scanf("%d %d",&N,&M);
  while(N>(N>M? N-M:M-N)){
    N=(N>M?N-M:M-N);
  }
  printf("%d",N);
}