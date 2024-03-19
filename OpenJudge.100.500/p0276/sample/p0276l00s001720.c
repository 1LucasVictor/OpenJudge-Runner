#include <stdio.h>
#define MAX 100

int A[MAX][MAX];

void Counting(int num, int data){
  A[num-1][data-1] = 1;
}

int main(){
  int n, i, j, k, num, data;

  scanf("%d",&n);
  //配列の初期化
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      A[i][j] = 0;
    }
  }
  
  //頂点の番号・出次数（接している頂点の数）を入力
  for(i = 0; i < n; i++){
    scanf("%d %d",&num, &k);
    if(k == 0) continue;
    else{
      //隣接する頂点を入力
      for(j = 0; j < k; j++){
	scanf("%d",&data);
	Counting(num, data);
      }
    } 
  }
  
  //データ出力
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d",A[i][j]);
      if(j != n-1) printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}

