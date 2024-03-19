#include<stdio.h>
#include<stdlib.h>

int BS(int *,int,int);

int main(){
  int i,j,n,m,c=0;
  int *P,*Q;
  scanf("%d",&n);
  P=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%d",&P[i]);
  }
  scanf("%d",&m);
  Q=(int *)malloc(m*sizeof(int));
  for(i=0;i<m;i++){
    scanf("%d",&Q[i]);
  }
  for(i=0;i<m;i++){
    c+=BS(P,n,Q[i]);
  }
  printf("%d\n",c);
  return 0;
}

int BS(int *P,int n,int k){
  int r=n,l=0,t;
  while(l<r){
    t=(r+l)/2;
    if(k==P[t]){
      return 1;
    }
    if(k>P[t]){
      l=t+1;
    }
    else if(k<P[t]){
      r=t;
    }
  }
  return 0;
}

