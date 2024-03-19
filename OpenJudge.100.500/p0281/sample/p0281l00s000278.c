#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1000000000
#define MAX 100
typedef struct{
  int color; //全て白(0)に初期化済み
  int id;
  int distance;
  int parent;
}DOT;

DOT A[MAX];
int G[MAX][MAX];

int MinTree(int n){
  int total=0;
  int min_box;
  int flag;
  int i;
  int u,v;

  A[0].distance=0;
  
  while(1){
    int min_box=INFTY;
    int flag=0;
    int u,v;

    for(i=0;i<n;i++){
      if(A[i].color!=BLACK && A[i].distance<min_box){//グループで最も最小の手を持つ先にある番号

	min_box=A[i].distance;
	u=i;
	flag=1;

      }
    }
    if(flag==0)break;
    A[u].color=BLACK;
    
    for(v=0;v<n;v++){
      if(G[u][v]!=INFTY && A[v].color!=BLACK){
	if(A[v].distance>G[u][v]+A[u].distance){//vまでの距離=uからv+uまで
	  A[v].distance=G[u][v]+A[u].distance;
	  A[v].parent=u;
	  A[v].color=GRAY;
	}
      }
    }
  }
  //  for(v=1;v<n;v++){
  //total+=G[v][A[v].parent];
  //}
  return total;
}


int main(){
  int n;
  int i,j;
  int id,agree,value,dis;
  
  for(i=0;i<100;i++){//INITIATE
    A[i].parent=-1;
    A[i].distance=INFTY;
    for(j=0;j<100;j++){
      G[i][j]=INFTY;
    }
  }
  
  scanf("%d",&n);//INPUT
  
  for(i=0;i<n;i++){
    scanf("%d%d",&id,&agree);
    for(j=0;j<agree;j++){
      
      scanf("%d%d",&value,&dis);
      G[id][value]=dis;
    }
  }
  
  MinTree(n);
  
  for(i=0;i<n;i++){
    printf("%d %d\n",i,A[i].distance);//PRINT
  }
  return 0;
}

