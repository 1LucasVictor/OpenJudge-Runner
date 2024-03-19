#include<stdio.h>
#define MAX 100
#define INF 10000001

void dijk();

int n;
int A[MAX][MAX], w[MAX];

int main(){
  int i, j;
  int u, k, v, c;

  scanf("%d", &n);
  //配列Aの初期化
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      A[i][j] = INF;
      }
  }

  for(i = 0; i < n; i++){
    scanf("%d%d", &u, &k);
    for(j = 0 ; j < k ; j++){
      scanf("%d%d", &v, &c);
      A[u][v] = c;//頂点uから頂点vまでの重みを記録する〜
    }
  }

  dijk();
  
  return 0;
}

void dijk(){
  int i, j;
  int min, minj;//minjは最小の重みのときのj(頂点v)のこと
  int visit[MAX];

  for(i = 0; i < n; i++){
    visit[i] = 0;
    w[i] = INF;
  }

  w[0] = 0;//最初の移動距離は0

  for(i = 0;; i++){
    min = INF;
    
    for(j = 0; j < n; j++){
      if(w[j] < min && visit[j] == 0){//常に最小の値を上書きしていく
	min = w[j];
	minj = j;
      }
    }
    
    if(min == INF) break;

    visit[minj] = 1;//移動した点はもう行かぬ
    
    for(j = 0; j < n; j++){
      if(A[minj][j] != INF && w[minj] + A[minj][j] < w[j] && visit[j] == 0){
	w[j] = A[minj][j] + w[minj];
      }
    }
  }

  for(i = 0; i < n; i++){
    printf("%d %d\n", i, w[i]);
  }
}

