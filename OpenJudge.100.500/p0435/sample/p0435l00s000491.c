#include<stdio.h>

int main(){
  int N,D;
  scanf("%d %d",&N,&D);
  int i;
  int j=0;
  int X[N],Y[N];
  for(i=0;i<N;i++){
    scanf("%d %d",&X[i],&Y[i]);
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D){
      j++;
    }
  }
  printf("%d\n",j);
}