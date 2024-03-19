#include <stdio.h>
#include <math.h>
int main(){
  int N,D;
  scanf("%d %d",&N,&D);
  int X[N],Y[N];
  int i;
  for (i=0;i<N;i++){
    scanf("%d %d",&X[i],&Y[i]);
  }
  double Z;
  int f=0;
  for (i=0;i<N;i++){
    Z = sqrt(pow(X[i],2)+pow(Y[i],2));
    if (Z<=D){
      f = f+1;
    }
  }
  printf("%d",f);
  return 0;
}