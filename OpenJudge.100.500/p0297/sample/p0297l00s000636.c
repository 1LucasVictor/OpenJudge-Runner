#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100000
#define QMAX 1000

//構造体
typedef struct {
  char name[10];
  int t;
}Process;
 
//プロトタイプ宣言
void enqueue(Process);
Process dequeue(void);
 
//グローバル変数
Process Q[MAX];
int n,q;
int ttime;
int i,j;
 
int main(void){
 
  int count=0;
  Process *stack = malloc(sizeof(int) * MAX);
 
  scanf("%d %d", &n, &q);
 
  //スケジュールの入力
  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  for(i=0;i<n+j;i++){
  stack[count] = dequeue();
  if(stack[count].t != -1)
  enqueue(stack[count++]);
  }
 
  free(stack);

  return 0;
}
 
 
//終了したプロセスを表示する
void enqueue(Process x){
 
  printf("%s %d\n",x.name,x.t);
}
 
Process dequeue(void){
 
  int flag=0;
 
    if(Q[i].t <= q){
      ttime += Q[i].t;
      Q[i].t = ttime;
      flag=1;
    }

    else{
      ttime += q;
      Q[n+j].t = Q[i].t - q;
      strcpy(Q[n+j].name,Q[i].name);
      j++;
    }
 
    if(flag==0)
      Q[i].t = -1;
 
      return Q[i];
       
}