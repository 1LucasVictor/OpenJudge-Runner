#include<stdio.h>
#include<stdlib.h>

#define N 100001
#define nil -1
#define WHITE 0
#define BLACK 1
#define INF 9999999

typedef struct{
  int prev,next,cost;
}Edge;
 
int n,d[N];
Edge e[500000];

void dijkstra(int);
void initializeSingleSource(int);

int main(){

  int i,j,u,k,c,ed=0,v,w=INF,r;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
      for(j=0;j<k;j++){
	e[ed].prev=u;
	scanf("%d%d",&e[ed].next,&e[ed].cost);
	ed++;
      }
  }
  
  dijkstra(ed);

  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
  
  return 0;
}


void dijkstra(int edges){

  int i,flag;

  for(i=0;i<n;i++){
   d[i]=INF;
  }
  d[0]=0;
    
  flag=1;
  while(flag!=0){
    flag=0;
    for(i=0;i<edges;i++){
      if(e[i].cost+d[e[i].prev]<d[e[i].next]){
	d[e[i].next]=e[i].cost+d[e[i].prev];
	flag=1;
      }
    }
  }
}
  