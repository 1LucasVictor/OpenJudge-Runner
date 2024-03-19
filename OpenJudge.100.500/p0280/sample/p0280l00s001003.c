#include <stdio.h>
#define N 100 
#define INF 10000


int main(){
 
  int  i,j,k, num, min;
  int  mini, total=0;
  int  M[N][N];
  int  flag[N], e[N];

  /*入力*/  
  scanf("%d", &num);
  
  for(i = 0; i < num; i++){
    for(j = 0; j < num; j++){
      scanf("%d", &M[i][j]);
    }
  }

  /*flag and e の初期化*/ 
  for(i = 0; i < num ; i++){
    flag[i] = 0;
    e[i] = INF;
  }
  e[0] = 0;

   
  /**/
  for(k = 0; k < num - 1; k++){
    min = INF;
    for(i = 0 ; i < num ; i++){
      if(e[i] < min && flag[i] == 0){
	min = e[i];
	mini = i;
      }
    }
      flag[mini] = 1;
 
    /*最小の要素を決める*/
    for(i = 0; i < num; i++){
      if(M[mini][i] < e[i] && M[mini][i] != -1 && flag[i]==0){
	e[i] = M[mini][i];
      }
    }
 
  }
 

  /*辺の重みの総和*/
  for(i = 0; i < num; i++) total += e[i];
  printf("%d\n", total);
 
 
 
  return 0;
}