#include<stdio.h>

#define M 100
#define I 10000000
#define W 0
#define G 1
#define B 2

int n,m[M][M];

int prim(){
  int i,u,min,v,sum = 0;
  int a[M],b[M],c[M];

  for(i = 0;i < n;i++){
    a[i] = I;
    b[i] = -1;
    c[i] = W;
  }

  a[0] = 0;

  while(1){
    min = I;
    u = -1;
    for(i = 0;i < n;i++){
      if(c[i] != B && min > a[i]){
	min = a[i];
	u = i;
      }
    }
    if(u == -1){
      break;
    }

    c[u] = B;

    for(v = 0;v < n ;v++){
      if(c[v] != B && m[u][v] != I){
	if(a[v] > m[u][v]){
	  a[v] = m[u][v];
	  b[v] = u;
	  c[v] = G;
	}
	
      }
    }
  }
  for(i = 0;i < n;i++){
    if(b[i] != -1) sum += m[i][b[i]];
  }

  return sum;
}


int main(){
  int k,i,j;
  scanf("%d",&n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&k);
      if(k == -1){
	m[i][j] = I;
      }
      else m[i][j] = k;
    }
  }
  printf("%d",prim());
  printf("\n");

  return 0;
}

