#include <stdio.h>

int MP(int R[],int n){
  long i,j,max=-1000000000,x;

  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      x=R[j]-R[i];
      if(max<x)max=x;
    }
  }

  return max;
}

int main(void){
  long n,i,R[200000];

  scanf("%ld",&n);

  for(i=0;i<n;i++){
    scanf("%ld",&R[i]);
  }

  printf("%ld\n",MP(R,n));

  return 0;
}