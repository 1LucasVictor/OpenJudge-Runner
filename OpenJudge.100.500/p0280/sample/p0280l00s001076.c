#include <stdio.h>

int d[101],pi[101],color[101];
int ans = 0;
int A[101][101];

void prim(int n,int r){
  int i,min,u;
  for(i=1;i<=n;i++){
    d[i] = 2001;
    pi[i] = -1;
    color[i] = 0;
  }
  
  //printf("unko3\n");
  d[r] = 0;
  
  while(1){
    min = 2001;
    for(i=1;i<=n;i++){
      if(color[i] != 2 && d[i] < min){
	min = d[i];
	u = i;
	//printf("unko4\n");
      }
    }
    if(min == 2001){
      //printf("unko5\n");
      break;
    }

    color[u] = 2;

    for(i=1;i<=n;i++){
      if(color[i] != 2 && A[u][i] != -1 && A[u][i] < d[i]){
	pi[i] = u;
	d[i] = A[u][i];
	//printf("unko6\n");
      }
    }
  }
}

int main(){
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&A[i][j]);
    }
  }
  //printf("unko1\n");
  prim(n,1);
  //printf("unko2\n");
  for(i=1;i<=n;i++){
    ans += d[i];
  }
  printf("%d\n",ans);
  return 0;
  
}

