#include<stdio.h>
#define N 1000
#define INF 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2



int main(){
  int n,keep[N][N];
  int i,j,num,min,sum=0,u;
  int d[N],p[N],color[N];
  
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[1]=0;
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&num);
      if(num==-1) keep[i][j]=INF;
      else keep[i][j]=num;
    }
  }

  while(1){
    min=INF;
    u=-1;
    for(i=1;i<=n;i++){
      if(min>d[i]&&color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
    
    if(u==-1) break;
    color[u]=BLACK;

    for(j=1;j<=n;j++){
      if(color[j]!=BLACK&&keep[u][j]!=INF){
	if(d[j]>keep[u][j]){
	  d[j]=keep[u][j];
	  p[j]=u;
	  color[j]=GRAY;
	}
      }
    }
  }

  for(i=1;i<=n;i++){
    if(p[i]!=-1)sum+=keep[i][p[i]];
  }
  printf("%d\n",sum);
}