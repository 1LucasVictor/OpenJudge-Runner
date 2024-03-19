#include<stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
void dij(void);
int n,G[MAX][MAX];
int main(){
  int i, j,a,b,c,d;

  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      G[i][j] = 1000000;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d%d",&a,&b);
    for ( j = 0; j < b; j++ ){
      scanf("%d%d",&c,&d);
      G[a][c]=d;
    }
  }

  dij();
  return 0;
}

void dij(){
  int i,j,k,b,c,min,X[MAX],color[MAX];

  
  for ( i=0; i < n; i++ ) {
    X[i] = 1000000;
    color[i] = 0;
  }

  X[0] = 0;

  while(1){
    min=1000000;
    b=-1;
    for ( i = 0; i < n; i++ ){
      if (min>X[i]&&BLACK!=color[i] ){
	b=i;
	min=X[i];
      }
    }
    if (min==1000000) break;
    color[b]=BLACK;
    for (c=0; c<n;c++ ){
      if ( BLACK!=color[c] && G[b][c] != 1000000 ){
	if ( X[c] > X[b] + G[b][c] ){
	  X[c] = X[b] + G[b][c];
	  color[c]=GRAY;
	}
      }
    }
  }

  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (X[i]==1000000?-1:X[i]));
  }
}

