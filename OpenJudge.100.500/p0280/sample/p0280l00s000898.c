#include <stdio.h>

#define INFTY 20000
#define Max 100
#define White 0
#define Gray 1
#define Black 2

int num,M[Max][Max];

int prim(){

  int sum;
  int u,minv;
  int d[Max],p[Max],color[Max];
  int i,v;
  
  for(i=0;i<num;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=White;
  }


  d[0]=0;

  while(1){
    minv=INFTY;
    u=-1;

    for(i=0;i<num;i++){
      if(minv>d[i]&&color[i]!=Black){
	u=i;
	minv=d[i];
      }
    }

    if(u==-1)break;

    color[u]=Black;
    for(v=0;v<num;v++){
      if(color[v]!=Black && M[u][v]!=INFTY){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=Gray;
	}
      }
    }
  }

  sum=0;
  for(i=0;i<num;i++){
    if(p[i]!=-1){
      sum+=M[i][p[i]];
    }
  }

  return sum;
}

int main(){
  int e,i,j;
  scanf("%d",&num);

  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      scanf("%d",&e);
      M[i][j]= (e==-1)?INFTY:e;
    }
  }

  printf("%d\n",prim());

  return 0;
}

