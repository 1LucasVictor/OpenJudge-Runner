#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,j,n,R[100],minv,maxv=0;

  scanf("%d",&n);
  if(n<2 || n>200000){
    exit(1);
  }
  for(i=0;i<n;i++){
    scanf("%d",&R[i]);
    if(R[i]<1 || R[i]>1000000000){
      exit(8);
    }
  }

  minv=R[0];

  for(j=1;j<n;j++){
    if(maxv>R[j]-minv){
      maxv=maxv;
    }else if(maxv<R[j]-minv){
      maxv=R[j]-minv;
    }

    if(minv<R[j]){
      minv=minv;
    }else if(minv>R[j]){
      minv=R[j];
    }
  }

  printf("%d\n",maxv);

  return 0;
}