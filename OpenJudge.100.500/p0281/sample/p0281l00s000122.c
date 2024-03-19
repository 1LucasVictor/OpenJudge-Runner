#include<stdio.h>
#define MAX 100
#define INFTY 200000
#define SHIRO 0
#define GRAY 1
#define KURO 2

int kazu,M[MAX][MAX],i,j;

void x(){
  int min,d[MAX],color[MAX],v;
  for(i=0;i<kazu;i++){
    d[i]=INFTY;
    color[i]=SHIRO;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    min=INFTY;
    int u=-1;
    for(i=0;i<kazu;i++){
      if(min>d[i] && color[i]!= KURO){
        u=i;
        min=d[i];
      }
    }
    if(u==-1)break;
    color[u]=KURO;
    for(v=0;v<kazu;v++){
      if(color[v]!=KURO && M[u][v]!=INFTY){
        if(d[v]>d[u]+M[u][v]){
          d[v]=d[u]+M[u][v];
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=0;i<kazu;i++){
    if(d[i] == INFTY){
            printf("%d %d\n",i,-1);
        }
        else{
            printf("%d %d\n",i,d[i]);
        }
    }
}

int main(){
  scanf("%d",&kazu);
  for(i=0;i<kazu;i++){
    for(j=0;j<kazu;j++){
      M[i][j]=INFTY;
    }
  }
  int k,c,u,v;
  for(i=0;i<kazu;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }
  x();
  return 0;
}

