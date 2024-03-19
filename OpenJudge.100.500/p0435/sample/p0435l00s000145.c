#include <stdio.h>

int main(){
  int N,S=0;
  long long int D;
  scanf("%d %lld\n",&N,&D);
  long long int X,Y;
  for(int i=1;i<=N;i++){
    scanf("%lld %lld\n",&X,&Y);
    if(X*X+Y*Y<=D*D) S++;
  }
  printf("%d\n",S);
  return 0;
}