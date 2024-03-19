#include<stdio.h>
#define N 1000

int main(){
  int i,j;
  int n,k,s,v[N][N];

  scanf("%d",&n);
  while(i!=n){
    scanf("%d",&i);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&s);
      v[i-1][s-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(v[i][j]==NULL) v[i][j]=0;
      printf("%d",v[i][j]);
      if(j!=n-1) printf(" ");
    }
    printf("\n");
  }
  return 0;
}