#include <stdio.h>
#define MAX 100
static const int INFTY =(1<<21);
#define WHITE 0
#define GLAY 1
#define BLACK 2

int n,m[MAX][MAX];

void daik(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];
  int i;
  for( i=0;i<n;i++){
    d[i]=INFTY;
    
    color[i]=WHITE;
  
  }
  d[0]=0;
  color[0]=GLAY;
  
  

  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=BLACK){
	u=i;
	minv=d[i];
      }
    }

    if(u==-1)break;
    color[u]=BLACK;
    int v;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&m[u][v]!=INFTY){
	if(d[v]>d[u]+m[u][v]){
	  d[v]=d[u]+m[u][v];
	  
	  color[v]=GLAY;
	}
      }

      
    }
  }

  
  for(i=0;i<n;i++){
    if(d[i]==INFTY)d[i]=-1;
    else d[i]=d[i];
    printf("%d %d\n",i,d[i]);
  }
  
}


int main(){int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j]=INFTY;
    }
  }
  

  int k,c,u,v;
   for(i=0;i<n;i++){
     scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
	m[u][v] =c;
    }}
   daik();
 return 0;
}


