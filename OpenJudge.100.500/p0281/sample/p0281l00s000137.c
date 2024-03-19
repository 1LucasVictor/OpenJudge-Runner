#include <stdio.h>
#define N 100
#define A 0
#define B 0
#define C 0
#define INF 1000000

int n,hi[N][N];

void ShortestPath();

int main(){
  int i,j,st,a,q,t;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      hi[i][j]=INF;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&st,&t);

    for(j=0;j<t;j++){
      scanf("%d%d",&a,&q);
      hi[st][a]=q;
    }
  }

  ShortestPath();

  return 0;
}
    
void ShortestPath(){
  int i,k,st,min;
  int de[N],judge[N];

  for(i=0;i<n;i++){
    de[i]=INF;
    judge[i]=0;
  }

  de[0]=0;
  judge[0]=1;

  while(1){
    min=INF;
    st=-1;
    for(i=0;i<n;i++){
      if(min > de[i] && judge[i]!=2){
	st=i;
	min=de[i];
      }
    }
    if(st==-1) break;
    judge[st]=2;

    for(k=0;k<n;k++){
      if(judge[k] !=2 && hi[st][k] !=INF){
	if(hi[st][k]+de[st] < de[k]){
	  de[k]=de[st]+hi[st][k];
	  judge[k]=1;
	}
      }
    }
  }
    
  for(i=0;i<n;i++){
    printf("%d ",i);
    printf("%d\n",de[i]);
  }
}

