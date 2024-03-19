#include <stdlib.h>
int main(){
  long long int N,D,count,i,dis;
  count=0;
  scanf("%lld %lld",&N,&D);
  long long int X[N+1],Y[N+1];
  for(i=0;i<N;i++){
    scanf("%lld %lld",&X[i],&Y[i]);
    dis=(X[i]*X[i])+(Y[i]*Y[i]);
    if(dis<=D*D) count++;
  }
  printf("%lld",count);
  return 0;
}