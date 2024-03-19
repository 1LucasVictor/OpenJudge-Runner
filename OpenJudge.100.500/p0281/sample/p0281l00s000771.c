#include<stdio.h>
static const int MAX = 400;
static const int INFTY = (1<<21);

int main(){
  int M[MAX][MAX];
  int f[MAX];
  int c[MAX];
  int n,i,j,s,u,v,m,a;

  scanf("%d",&n);
  for(i = 0;i< n;i++){
    for(j = 0;j < n;j++){
      M[i][j] = INFTY;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d %d",&u,&s);
    for(j = 0;j < s;j++){
      scanf("%d %d",&v,&a);
      M[u][v] = a;
    }
  }

  for(i = 0;i < n;i++){
    f[i] = INFTY;
    c[i] = 0;
  }

  f[0] = 0;
  while(1){
    m = INFTY;
    u = -1;
    for(i = 0;i < n;i++){
      if(m > f[i] && !c[i]){
	u = i;
	m = f[i];
      }
    }
    if(u == -1)break;
    c[u] = 1;
    for(i = 0;i < n;i++){
      if(!c[i] && M[u][i] != INFTY){
	if(f[i] > f[u] + M[u][i]){
	  f[i] = f[u] + M[u][i];
	}
      }
    }
  }

  for(i = 0;i < n;i++){
    printf("%d %d\n", i,(f[i]==INFTY?-1:f[i]));
  }

  return 0;
}

