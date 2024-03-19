#include <stdio.h>

int i,j,n,e,M[100][100];

int prim(int n){
  int u,sum,mincost,d[100],p[100],color[100];
 
  for(i=0;i<n;i++){
    d[i]=(1<<21);
    p[i]=-1;
    color[i]=0;
  }
  
  d[0]=0;
  while(1){
    mincost=(1<<21);
    u=-1;
    for(i=0;i<n;i++){
      if(mincost>d[i]&&color[i]!=2){
        u=i;
        mincost=d[i];
      }
    }
    if(u==-1){
      break;
    }
    color[u]=2;
    for(j=0;j<n;j++){
      if(color[j]!=2&&M[u][j]!=(1<<21)){
        if(d[j]>M[u][j]){
          d[j]=M[u][j];
          p[j]=u;
          color[j]=1;
        }
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum+=M[i][p[i]];
    }
  }
  
  return sum;
}

int main(void)
{
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1) ? (1<<21):e;
    }
  }
  printf("%d\n",prim(n));
  return 0;
}