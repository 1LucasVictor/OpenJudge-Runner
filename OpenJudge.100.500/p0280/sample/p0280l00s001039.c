#include <stdio.h>
#define M 100000
#define N -10

void cal();


int G[101][101],n;

int main()
{
  int i,j,m;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    
    for(j=0;j<n;j++){
      
      scanf("%d",&m);
      if(m==-1){
	G[i][j] = M;
      } else{
	G[i][j] = m;}
    }
  }

  cal();
  
  return 0;
}

void cal()
{
  int i;
  int min,u,v;
  int gou=0;
  int a[101],b[101],c[101];
  
  for(i=0;i<n;i++){
    a[i] = M;
    b[i] = N;
    c[i] = 0;
  }

  a[0] = 0;

  while(1){
    min = M;
    u = N;
    for(i=0;i<n;i++){
      if(c[i]!=2 && a[i]<min){
	min = a[i];
	u = i;
      }
    }
    if(u==N)break;
    
    c[u] = 2;

    for(v=0;v<n;v++){
      if(c[v]!=2 && G[u][v]!=M){

	if(a[v]>G[u][v]){
	  a[v] = G[u][v];
	  b[v] = u;
	  c[v] = 1;
	}
      }
    }
    
  }
  for(i=0;i<n;i++){
    if(b[i]!=N)gou += G[i][b[i]];
  }
  
  printf("%d\n", gou);
}


