#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
制約
 1≤n≤100
 0≤ci≤100,000
 |E|≤10,000
 0から各ノードへは必ず経路が存在する
*/

#define MAX 200

int Minimum(int, int);

int main(){
  int n, i, j, sum;
  int c, v, k, u;
  int D[MAX][MAX];
  int x, y;

  for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      D[i][j] = 1e9;
      if(i == j) D[i][j] = 0;
    }
  }

  scanf("%d", &n);
  if(n<1 || n>100) exit(1);
  
  for(i=0; i<=n-1; i++){
    scanf("%d %d", &u, &k);
    for(j=0; j<=k-1; j++){
      scanf("%d %d", &v, &c);
      D[u][v] = c;
    }
  }

  for(k=0; k<=n-1; k++){
    x = 0;
    y =0;
    for(i=0; i<=n-1; i++){
      x += y;
      y=1;
      for(j=0; j<=n-1; j++){
	sum = 0;
	sum = D[i][k]+D[k][j];
	D[i][j] = Minimum(D[i][j], sum);
      }
      y++;
    }
  }
      
  for(i=0; i<=n-1; i++) printf("%d %d\n", i, D[0][i]);
  x = 0;
  
  return 0;
}

int Minimum(int x, int y){
  if(x<y) return x;
  else return y;
} 

