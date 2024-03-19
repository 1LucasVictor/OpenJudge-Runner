#include<stdio.h>
#define SIZE 102
#define INF 20000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int prim(int matrix[][SIZE], int num){
  int color[SIZE],depth[SIZE],parent[SIZE];
  int v,i,min,sum=0,u;

  for(i=0;i<num;i++){
    depth[i]=INF;
    parent[i]=-1;
    color[i]=WHITE;
  }
  depth[0]=0;
  while(1){
    u=-1;
    min=INF;
    for(i=0;i<num;i++){
      if(color[i]!=BLACK && depth[i]<min){
	    min = depth[i];
	    u=i;
      }
    }
    if(u == -1)break;
    color[u]=BLACK;

    for(v=0;v<num;v++){
      if(color[v]!=BLACK && matrix[u][v]!=INF){
	    if(matrix[u][v]<depth[v]){
	     depth[v]=matrix[u][v];
	     parent[v]=u;
	     color[v]=GRAY;
	    }
      }
    }
    sum=0;
    for(i=0;i<num;i++)
      if(parent[i]!=-1)
	sum+=matrix[i][parent[i]];    
  }
  return sum;
}

int main(){
  int matrix[SIZE][SIZE];
  int i,j,value,num,result;
  scanf ("%d",&num);

  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      scanf("%d",&value);
      matrix[i][j]=(value==-1)?INF:value;
    }
  }
  result = prim(matrix,num);
  printf("%d\n",result);
  return 0;
}
