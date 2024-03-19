#include <stdio.h>

#define M 1000
#define NIL -1
#define INF 10000000
#define black 1
#define white 0
#define gray 2

void syokika(int *,int *,int);
void dijkstra(int);

int A[M][M];

int main(){
  int len,path,elem,vert;
  int i,j;

  scanf("%d",&len);

  for(i=0;i<len;i++){
    scanf("%d%d",&elem,&path);
    for(j=0;j<path;j++){
      scanf("%d",&vert);
      scanf("%d",&A[elem][vert]);
    }
  }
  
  dijkstra(len);

  
  
  return 0;
}

void syokika(int *find,int *p,int len){
  int i;
  for(i=0;i<len;i++){
    find[i]=INF;
    p[i]=NIL;
  }
  find[0]=0;
}

void dijkstra(int len){
  int find[M],p[M],min,color[M],u;//warning;
  int i,j;

  syokika(find,p,len);
  for(i=0;i<len;i++) color[i]=white;

  while(1){
    min=INF;
    for(i=0;i<len;i++){
      if(color[i]!=black && find[i] < min){
	min=find[i];
	u=i;
      }
    }
    if(min == INF) break;
    color[u]=black;
    
    for(j=0;j<len;j++){
      if(A[u][j]>0){
	if(color[j]!=black && (find[u]+A[u][j])<find[j]){
	  p[j]=u;
	  find[j]=find[u]+A[u][j];
	}
      }
    }
  }

  for(i=0;i<len;i++) printf("%d %d\n",i,find[i]);
}

