#include<stdio.h>
#include<string.h>

//構造体
typedef struct {
  char name[10];
  int t;
}Process;


//プロトタイプ宣言
void enqueue(Process);
Process dequeue(void);

//グローバル変数
Process store[10000];
Process Q[1000];
int n,q;
int ttime;
int i,j;

int main(void){

  int count=0;
  Process stack[1000];


  scanf("%d %d", &n, &q);

  //スケジュールの入力
  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  for(i=0;i<n;i++)
  store[i]=Q[i];

  for(i=0;i<n+j;i++){
  stack[count] = dequeue();
  if(stack[count].t != -1)
  enqueue(stack[count++]);
  }

  return 0;
}


//終了したプロセスを表示する
void enqueue(Process x){

  printf("%s %d\n",x.name,x.t);
}

Process dequeue(void){

  int flag=0;

    if(store[i].t <= q){
      ttime += store[i].t;
      store[i].t = ttime;
      flag=1;
    } 
    else{
      ttime += q;
      store[n+j].t = store[i].t - q;
      strcpy(store[n+j].name,store[i].name);
      j++;
    }

    if(flag==0)
      store[i].t = -1;

      return store[i];
      
}