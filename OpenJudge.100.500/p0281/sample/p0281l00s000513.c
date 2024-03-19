#include<stdio.h>
int X=1000000;
int WHITE=0;
int GRAY=1;
int BLACK=2;
int n,i;
int G[100][100];
int Path(){
  int i;
  int u,v,min;
  int d[100],color[100];
  
  for(i=0;i<n;i++){
    d[i]=X;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    min=X;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i]&&color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&G[u][v]!=X){
	if((d[u]+G[u][v])<d[v]){
	  color[v]=GRAY;
	  d[v]=d[u]+G[u][v];
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(d[i]!=-1&&d[i]!=X)
      printf("%d %d\n",i,d[i]);
  }
  return 0;
}
int main(){
  int c,k,u,v;
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=X;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      G[u][v]=c;
    }
  }
  Path();
  return 0;
}



