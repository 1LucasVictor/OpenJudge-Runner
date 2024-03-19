#include<stdio.h>
#define N 101
#define W 0
#define G 1
#define B 2
static const int INFTY = (1<<21);

main(){
  int n,M[N][N];
  int i,j,e,sum;
  int u,minv;
  int d[N],p[N],color[N];
  
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INFTY:e;
    }
  }
  
  for(i=0;i<n;i++){
    d[i]=INFTY;
    if(i==0){
      d[i]=0;
    }
    p[i]=-1;
    color[i]=W;
  }
  
  
  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]==0){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1){
      break;
    }   else {
      color[u]=G;
      for(j=0;j<n;j++){
	if(d[j]>M[u][j] && color[i]==0){
	  p[j]=u;
	  d[j]=M[u][j];
	}
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
      if(p[i]!=-1) sum += M[i][p[i]];
    }

printf("%d\n",sum);
return 0;
}