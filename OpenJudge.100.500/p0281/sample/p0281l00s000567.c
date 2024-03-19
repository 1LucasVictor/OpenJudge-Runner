#include<stdio.h>

#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[MAX][MAX];

void dijk(){

  int sum,i,u,min;
  int d[MAX],c[MAX];

  for(i=0;i<n;i++){
    d[i]=INFTY;
    c[i]=WHITE;
  }

  d[0]=0;

  while(1){
    min=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && c[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }

    if(u==-1) break;
    c[u]=BLACK;
    
    for(i=0;i<n;i++){
      if(c[i]!=BLACK && M[u][i]!=INFTY){
	if(d[i]>d[u]+M[u][i]){
	      d[i]=d[u]+M[u][i];
	      c[i]=GRAY;
	    }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INFTY){ printf("-1\n");
    } else printf("%d\n",d[i]);
  }
}


int main(){

  int i,j,a,b,c,d;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }

for(i=0;i<n;i++){
  scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d%d",&c,&d);
      M[a][c]=d;
    }
  }

 dijk();

  return 0;
}