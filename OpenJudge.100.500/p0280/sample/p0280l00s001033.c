#include<stdio.h>
#define N 101
int main(){
  int n,i,j,num;
  int k=1,m=0,sum=0;
  int a[N],f[N],G[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  f[0]=1;
  a[0]=0;
  for(i=1;i<n;i++) f[i]=0;
  while(1){
    num=2001;
    for(i=0;i<k;i++){
      for(j=0;j<n;j++){
    if(G[a[i]][j]<num && G[a[i]][j]!=-1 && f[j]!=1){
      num=G[a[i]][j];
      m=j;
    }
      }
    }
    if(k!=n){
      a[k]=m;
      f[m]=1;
      sum+=num;
      k++;
    }
    else break;
  }
  printf("%d\n",sum);
  return 0;
}



