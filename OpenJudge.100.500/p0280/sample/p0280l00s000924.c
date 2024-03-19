#include<stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1000000

int n,M[MAX][MAX];

int prim(){
  int u,j,i,min;
  int omomi[MAX],oya[MAX],color[MAX];

  for(i=0;i<n;i++){
    omomi[i]=INFTY;
    oya[i]=-1;
    color[i]=WHITE;
  }
  omomi[0]=0;

  while(1){
    min=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(min>omomi[i]&&color[i]!=BLACK){
	u=i;
	min=omomi[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(j=0;j<n;j++){
      if(color[j]!=BLACK&&M[u][j]!=INFTY){
	if(omomi[j]>M[u][j]){
	  omomi[j]=M[u][j];
	  oya[j]=u;
	  color[j]=GRAY;
	}
      }
    }
  }
  int sum=0;
  for(i=0;i<n;i++){
    if(oya[i]!=-1)sum+=M[i][oya[i]];
  }
  return sum;
}

int main(){
  int i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&k);
      M[i][j]=(k==-1)?INFTY:k;
    }
  }
  printf("%d\n",prim());
  return 0;
}

