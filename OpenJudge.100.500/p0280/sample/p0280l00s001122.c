#include<stdio.h>

static const int MAX = 500;
static const int INFTY=(1<<21);

int main( ){
  int i,j,n,u,vg,k;
  int Adj[MAX][MAX];
  int d[MAX],p[MAX],v[MAX];
  int mini,sum;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&k);
      Adj[i][j] = (k ==-1)?INFTY:k;
    }
  }

  for(i=0;i<n;i++){
    d[i] = INFTY;
    p[i] = -1;
    v[i] = 0;
  }
  d[0] = 0;

  while(1){
    mini = INFTY;
    u = -1;
    for(i=0;i<n;i++){
      if(mini>d[i]&&!v[i]){
	u=i;
	mini=d[i];
      }
    }
    if(u==-1)break;
    v[u]=1;
    for(vg=0;vg<n;vg++){
      if(!v[vg] && Adj[u][vg]!=INFTY){
	if(d[vg]>Adj[u][vg]){
	  d[vg]=Adj[u][vg];
	  p[vg]=u;
	}
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=Adj[i][p[i]];
  }
  printf("%d\n",sum);
  return 0;
}

