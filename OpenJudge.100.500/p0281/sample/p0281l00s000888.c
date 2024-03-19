#include<stdio.h>
#define N 110
#define INF 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2
 
int n,keep[N][N];
 
void cul(){
  int i,min,u;
  int d[N],color[N];
   

 
  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=WHITE;
  }
 
  d[0]=0;
   
 
  while(1){
    min=INF;
    for(i=0;i<n;i++){
      if(min>d[i]&&color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
     
    if(min==INF) break;
    color[u]=BLACK;
 
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && keep[u][i]!=INF &&d[i]>d[u]+keep[u][i] ){
	d[i]=keep[u][i]+d[u];
      }
    }
  }
 
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}

int main(){
  int i,j,u,a,b,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      keep[i][j]=INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&a);
    for(j=0;j<a;j++){
      scanf("%d",&b);
      scanf("%d",&c);
      keep[u][b]=c;
    }
  }
  
  cul();
  return 0;
}