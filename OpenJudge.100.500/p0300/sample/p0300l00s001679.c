#include<stdio.h>
int main(){
  int i,j,n,q,S[10000],T[1000],a,b,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&T[j]);
  }
  for(a=0;a<n;a++){
    for(b=0;b<q;b++){
      if(S[a]==T[b]) count++;
    }
  }
  printf("%d\n",count);
}

