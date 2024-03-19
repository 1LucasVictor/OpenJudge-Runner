#include<stdio.h>
#define N 100

int main(){
  int i=0,j,c;
  int n,k,s,v[N][N];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&c);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&s);
      v[i][s-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(v[i][j]==NULL) v[i][j]=0;
      printf("%d",v[i][j]);
    }
    printf("\n");
  }
  return 0;
}