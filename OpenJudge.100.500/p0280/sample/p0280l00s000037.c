#include<stdio.h>
#include<limits.h>
#define MAX 102
int d[MAX],color[MAX],pi[MAX],ar[MAX][MAX],sum=0;
void prim(int ,int);
int main(){
  int n,i,j;
scanf("%d",&n);
 
for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
    scanf("%d",&ar[i][j]);
    if(ar[i][j]==-1){
      ar[i][j]=INT_MAX;
    }
  }
 }
 prim(n,1);
 for(i=1;i<=n;i++){
   sum+=d[i];
 }
 printf("%d\n",sum);
}
void prim(int w,int r){
  int i,j,mincost,k;
  for(i=1;i<=w;i++){
    d[i]=INT_MAX;
    pi[i]=-1;
    color[i]=0;
  }
  d[r]=0;

  while(1){
    mincost=INT_MAX;
    for(j=1;j<=w;j++){
      if(color[j]!=1&&d[j]<mincost){
	mincost=d[j];
	i=j;
      }
    }
    if(mincost==INT_MAX){
      break;
    }
    color[i]=1;
    for(k=1;k<=w;k++){
      if(color[k]!=1&&ar[i][k]<d[k]){
	pi[k]=i;
	d[k]=ar[i][k];
      }
    }
  }
}

