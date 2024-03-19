#include <stdio.h>
#include <stdlib.h>
#define N 100
#define BIG 10000000

int n,arr[N][N];

int main(){
  int num,i,j,node,me,omomi,d[N],p[N],col[N],u,v,min;
  scanf("%d",&n);
  if(n<1 || n>N) exit(2);
  
  for(i=0;i<n;i++){
    d[i]=BIG;
    p[i]=-1;
    col[i]=0;
    for(j=0;j<n;j++){
      arr[i][j] = BIG;
    }		     
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&me,&num);
    for(j=0;j<num;j++){
      scanf("%d %d",&node,&omomi);
      arr[me][node]=omomi;
    }
  }

  d[0]=0;
  col[0]=1;
  while(1){
    min=BIG;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && col[i]!=2){
	u=i;
	min=d[i];
      }
    }
    if(u==-1)break;
    col[u]=2;
    for(v=0;v<n;v++){
      if(col[v]!=2 && arr[u][v] != BIG){
	if(d[v] > arr[u][v]+d[u]){
	  d[v]=arr[u][v]+d[u];
	  p[v]=u;
	  col[v]=1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(d[i] == BIG) printf("%d %d\n",i,-1);
    else printf("%d %d\n",i,d[i]);
  }
  return 0;
}

