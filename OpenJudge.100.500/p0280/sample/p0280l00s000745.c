#include<stdio.h>
#define MAX 101
#define WHITE 0
#define BLACK 1

typedef struct node{
  int omomi[MAX];
  int color;
}Node;


Node point[MAX];
int n;
int count=0;

int d[MAX];
int pi[MAX];



void prim();

int main(){
  int i,j;

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&point[i].omomi[j]);
      if(point[i].omomi[j]==-1)point[i].omomi[j]=2001;
    }
  }

  prim();

  for(i=1;i<=n;i++){
    count+=d[i];
  }
  printf("%d\n",count);
  
  return 0;
}


void prim(){
  int i,j,u,v;
  int mincost;

  for(i=1;i<=n;i++){
    d[i]=2001;
    
    point[i].color=WHITE;

    d[1]=0;
  }

  while(1){
    mincost=2001;

    for(i=1;i<=n;i++){
      if(point[i].color!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    
    if(mincost==2001)break;

    point[u].color=BLACK;

    for(v=1;v<=n;v++){
      if(point[v].color==WHITE && point[u].omomi[v]<d[v]){
	d[v]=point[u].omomi[v];
      }
    }

    
  }



  

  }

