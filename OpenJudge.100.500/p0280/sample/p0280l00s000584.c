#include<stdio.h>

#define MAX 101
#define WHITE 0
#define BLACK 1
#define INF 2001
#define NIL -1

int G[MAX][MAX],a,b[MAX],p[MAX],c[MAX];

void prim(int);

int main()
{
  int i,j,sum=0;
  
  scanf("%d",&a);
  
  for(i=1;i<=a;i++){
    for(j=1;j<=a;j++){
      scanf("%d",&G[i][j]);
    }
  }
  
  prim(1);
  
  for(i=1;i<=a;i++){
    //printf("%d %d %d\n",G[i][p[i]],b[i],p[i]);
    
    sum+=b[i];
  }
  
  printf("%d\n",sum);
  
  return 0;
}


void prim(int s)
{
  int i;
  
  for(i=1;i<=a;i++){
    b[i]=INF;
    p[i]=NIL;
  }
  
  b[s]=0;
  
  while(1){
    int r,mincost=INF;
    
    for(i=1;i<=a;i++){
      if(c[i]!=BLACK && b[i]<mincost){
	mincost = b[i];
	r = i;
      }
    }

    if(mincost==INF)break;
    
    //printf("min:%d\n",mincost);
    
    c[r]=BLACK;    

    for(i=1;i<=a;i++){
      if(c[i]!=BLACK && G[r][i]<b[i] && G[r][i]!=-1){
	p[i] = r;
	b[i] = G[r][i];
      }
    }
  }
}

