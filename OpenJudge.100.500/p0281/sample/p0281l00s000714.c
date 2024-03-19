#include<stdio.h>

#define CMAX 100000
#define N 100
#define NIL -1
static const int INF=(1<<21);

int n,u,k,v,c;
int A[N][N],key[N],pi[N];

void SSSP(void){
  int i,j,flag[N],minv=0;
  
  for(i=0;i<n;i++){
    key[i]=INF;
    pi[v]=NIL;
    flag[i]=0;
  }
  
  key[0]=0;
  
  for(i=0;i<n;i++){
    u=NIL;  
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
      if(key[v]>=key[u]+A[u][v]){
	key[v]=key[u]+A[u][v];
      }
    }
  }
}

int main(){
  int i,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INF;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      A[u][v]=c; 
    }
  }
  
  SSSP();
  
  for(i=0;i<n;i++){
    printf("%d %d\n",i,(key[i]==INF?-1:key[i]));
  }  
  return 0;
}