#include<stdio.h>
#include<limits.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,m[100][100];
void dijkstra(){
  int min,i,j,u;
  int d[100],color[100];
  for(i=0;i<n;i++){
    d[i]=INT_MAX;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    min=INT_MAX;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i]&&color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(j=0;j<n;j++){
      if(color[j]!=BLACK&&m[u][j]!=INT_MAX){
	if(d[j]>d[u]+m[u][j]){
	  d[j]=d[u]+m[u][j];
	  color[j]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(d[i]==INT_MAX)d[i]=-1;
    printf("%d %d\n",i,d[i]);
  }
}

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j]=INT_MAX;
    }
  }
  int k,c,u,v;
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&c);
      m[u][v]=c;
    }
  }
  dijkstra();
  return 0;
}

