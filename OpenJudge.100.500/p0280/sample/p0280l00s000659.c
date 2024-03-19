#include<stdio.h>

int a[101][101];
int d[101];
int pi[101];
char color[101];
int n,mincost,sumcost=0;

void prim(void);

int main(){
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }

  prim();
 
  printf("%d\n",sumcost);

  return 0;
}

void prim(void){
  int i,j,u;
  for(i=0;i<n;i++){
    d[i]=2001;
    pi[i] = -1;
    color[i]='W';
  }
  d[0]=0;
  while(1){
    mincost = 2000000;
    for(i=0;i<n;i++){
      if(color[i]!='B' && d[i] < mincost){
	mincost = d[i];
        u = i;
      }
    }

    if(mincost==2000000) break;
    color[u]='B';
  
  for(i=0;i<n;i++){
    if(color[i]!='B' && a[u][i]!=-1 && a[u][i]<d[i]){
      pi[i] = u;
      d[i]=a[u][i];
     }
   }
  }
  for(i=1;i<n;i++){
    sumcost+=d[i];
  }
}