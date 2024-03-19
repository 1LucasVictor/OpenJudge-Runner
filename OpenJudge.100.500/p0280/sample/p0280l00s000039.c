#include<stdio.h>
#define N 101
#define MAX 2001

int main(){
  int i,j,k;
  int n,cnt=0;
  int g[N][N],c[N],d[N],pi[N];
  int min;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&g[i][j]);
    }
  }
  for(i=0;i<n;i++){
    c[i]=0;
    pi[i]=-1;
    d[i]=MAX;
  }
  d[0]=0;

  while(1){
    min=MAX;
    for(i=0;i<n;i++){
      if(c[i]!=2 && d[i]<min){
        min=d[i];
        k=i;
      }
    }
    if(min==MAX)
      break;
    c[k]=2;
    for(i=0;i<n;i++){
      if(g[k][i]!=-1 && c[i]!=2 && g[k][i]<d[i]){
        pi[i]=k;
        d[i]=g[k][i];
        c[i]=1;
      }
    }
  }
  for(i=0;i<n;i++){
    if(pi[i]!=-1)cnt+=g[i][pi[i]];
  }
  printf("%d\n",cnt);
  return 0;
}