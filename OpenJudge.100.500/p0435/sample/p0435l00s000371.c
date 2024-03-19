#include<stdio.h>
int main()
{
  long N,D;
  scanf("%ld %ld",&N,&D);
  long X[200010],Y[200010];
  for(int i=0;i<N;i++){
    scanf("%ld %ld",&X[i],&Y[i]);
  }
  int count=0;
  for(int i=0;i<N;i++){
    if(X[i]*X[i] + Y[i]*Y[i] <= D*D){count++;}
  }
  printf("%d",count);
}