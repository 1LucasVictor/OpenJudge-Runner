#include<stdio.h>
#define MAX 1000

int prim();

int n;
int A[MAX][MAX];

int main(){
  int i, j;
  int answer;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &A[i][j]);
    }
  }
  
  answer = prim();
 
  printf("%d\n", answer);
  
  return 0;
}

int prim(){
  int i, j;
  int answer = 0;
  int min, minj;
  int visit[MAX],w[MAX];//weightの意

  for(i = 0; i < n; i++){
    visit[i] = 0;
    w[i] = 2001;
  }

  w[0] = 0;//最初の移動距離は0

  for(i = 0; i < n - 1; i++){
    min = 2001;
    
    for(j = 0; j < n; j++){
      if(w[j] < min && visit[j] == 0){//常に最小の値を上書きしていく
	min = w[j];
	minj = j;
      }
    }

    visit[minj] = 1;//移動した点はもう行かぬ

    for(j = 0; j < n; j++){
      if(A[minj][j] != -1 && A[minj][j] < w[j] && visit[j] == 0){
	w[j] = A[minj][j];
      }
    }
  }

  for(i = 0; i < n; i++){
    answer += w[i];
  }
  
  return answer;
}

