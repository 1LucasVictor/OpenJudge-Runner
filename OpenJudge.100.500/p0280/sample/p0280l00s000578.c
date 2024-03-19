#include<stdio.h>

int prim(void);
#define MAX 100
#define INFTY (1<<21)

int n;
int black=2,white=0,gray=1;
int A[MAX+1][MAX+1];

int prim(){
  int i,u,v,ans=0;
  int mincost;
  int d[MAX+1],p[MAX+1],color[MAX+1];

  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=white;
  }
  
  d[0]=0;
  
 while(1){ 
    mincost=INFTY;
    u=-1;
   for(i=0;i<n;i++){
      if(color[i]!=black && d[i]<mincost){
		u=i;
		mincost=d[i];
}}

    if(u==-1)break;
    color[u]=black;
    
   for(v=0;v<n;v++){if(color[v]!=black && A[u][v]!=INFTY){
     if(A[u][v]<d[v]){
      d[v]=A[u][v];
      p[v]=u;
      color[v]=gray;
     }
    }
   }}
 
 for(i=0;i<n;i++){
  if(p[i]!=-1)ans+=A[i][p[i]];}
  return ans;
 }

int main(){
  int i,j,e;
  scanf("%d", &n);
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    scanf("%d", &e);
    A[i][j]=(e==-1)?INFTY : e;
  }}
  
  printf("%d\n", prim());
  return 0;

}

