#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(){
  int n,i,j,e,sum,u,v,min;
  int use[MAX],pi[MAX],key[MAX], M[MAX][MAX];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INFTY:e;
    }
  }

  for(i=0;i<n;i++){
    key[i]=INFTY;
    pi[i]=-1;
  }

  key[0]=0;

  for(i=0;i<n;i++){
    use[i]=-1;
  }

  while(1){
    u=-1;
    min=INFTY;
    for(i=0;i<n;i++){
      if(key[i]<min && use[i]==-1){
	u=i;
	min=key[i];
      }
    }

    if(u==-1){
      break;
    }
    use[u]=1;
    for(v=0;v<n;v++){
      if(M[u][v]<key[v] && use[v]==-1){
	key[v]=M[u][v];
	pi[v]=u;
      }
    }
  }

  sum=0;

  for(i=0;i<n;i++){
    if(pi[i]!=-1)sum+=M[i][pi[i]];
  }

  printf("%d\n",sum);
  return 0;
}