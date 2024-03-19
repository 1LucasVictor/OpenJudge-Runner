#include<stdio.h>
#define N 100
#define MAX 100000
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2


int A[N][N], n;

void aoj();


int main(){
  int i, j, a;
  int b,c;
  int d,e;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      A[i][j] = INFTY;
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &b, &e);
    for(j = 0; j < e; j++){
      scanf("%d%d", &c, &d);
      A[b][c] = d;
    }
  }

  aoj();

  return 0;
}

void aoj(){
  int i,a,b, min;
  int sum = 0;
  int B[N], color[N];

  for(i = 0; i < n; i++){
    B[i] = INFTY;
    color[i] = WHITE;
  }

  B[0] = 0;
  color[0] = GRAY;

  while(1){
    min = INFTY;
    a = -1;
    for(i = 0; i < n; i++){
      if(min > B[i] && color[i] != BLACK){
        a = i;
        min = B[i];
      }
    }
 if(a == -1) break;

 
    color[a] = BLACK;

    for(b = 0; b < n; b++){
      if(color[b] != BLACK && A[a][b] != INFTY){
        if(B[b] > B[a] + A[a][b]){
          B[b] = B[a] + A[a][b];

	  
          color[b] = GRAY;
        }
      }
    }

  }

  for(i = 0; i < n; i++){
    printf("%d ",i);
    if(B[i]==INFTY) printf("-1\n");
    else printf("%d\n",B[i]);
  }

}


