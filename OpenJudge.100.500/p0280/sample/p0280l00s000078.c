#include<stdio.h>
#define BLACK 1
#define WHITE 0
#define INF 100000
#define NUM 100

int main(){
  int n,i,j,a[NUM][NUM],d[NUM],pi[NUM],color[NUM],minv,u,sum,v,a1;
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a1);
      if(a1!=-1){
	a[i][j]=a1;
      }else{
	a[i][j]=INF;
      }
    }
  }  
  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  
  while(1){
    minv=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=BLACK){
	minv=d[i];
	u=i;
      }
    }

    if(u==-1){
      break;
    }

    color[u]=BLACK;
    
    for(v=0;v<n;v++){
      if(color[v] != BLACK && a[u][v] != INF){
	if(a[u][v] < d[v]){
	  pi[v]=u;
	  d[v]=a[u][v];
	}
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
    if(pi[i]!=-1){
      sum+=a[i][pi[i]];
    }
  }
  printf("%d\n",sum);
  return 0;
}

