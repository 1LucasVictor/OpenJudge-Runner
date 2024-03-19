#include<stdio.h>
#define MAX 100
#define INF 1000000

void ssS(void);

int n;
int G[MAX][MAX];

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    
    for(j=0;j<n;j++) G[i][j]=INF;
  }
  
  for(i=0;i<n;i++){

    scanf("%d%d",&u,&k);
    
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      G[u][v]=c;
    }
    
  }

  ssS();
  
  return 0;
}

void ssS(){
  int i,min,u;
  int d[MAX],ch[MAX];

  for(i=0;i<n;i++){
    d[i]=INF;
    ch[i]=0;
  }

  d[0]=0;
  ch[0]=2;

  while(1){
    
    min=INF;
    u=-1;
    
    for(i=0;i<n;i++){
      
      if(ch[i]!=1 && d[i]<min){
	min=d[i];
	u=i;
      }

    }

    if(u==-1) break;
    
    ch[u]=1;

    for(i=0;i<n;i++){

      if(ch[i]!=1 && G[u][i]!=INF){

	if(G[u][i]+d[u]<d[i]){
	  d[i]=d[u]+G[u][i];
	  ch[i]=2;
	}

      }

    }

  }

  d[0]=0;
  for(i=0;i<n;i++){
    printf("%d",i);
    printf(" %d\n",d[i]);
  }
  
}

