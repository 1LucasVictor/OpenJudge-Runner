#include<stdio.h>

#define NIL -1
#define N 100
static const int INF=(1<<21);
 
int n;
int A[N][N],key[N],pi[N];

void MST(void){

  int i,j,u,v,flag[N],minv;
  
  for(i=0;i<n;i++){
    key[i]=INF;
    pi[i]=NIL;
    flag[i]=0;
  }
  key[0]=0;

  for(i=0;i<n;i++){
    minv=INF;
    for(j=0;j<n;j++){
      if(!flag[j] && key[j]<minv){
	u=j;
	minv=key[j];  //the minimum cost
      }
    }

    if(u==NIL) break;
    flag[u]=1;

    for(v=0;v<n;v++){
      if(!flag[v] && key[v]>=A[u][v]){
	key[v]=A[u][v];
	pi[v]=u;  //saitan
      }
    }
  }
}

int main(){

  int i,j,e,sum=0;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      A[i][j]=(e==-1)?INF:e;
    }
  }

  MST();

  for(i=0;i<n;i++){
    sum+=key[i];
  }

  printf("%d\n",sum);
  return 0;
}
 