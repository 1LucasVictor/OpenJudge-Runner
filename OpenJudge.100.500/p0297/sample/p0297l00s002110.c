// Queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000 // キューの最大の長さ

typedef struct pp{
  char name[10];
  int t;
}P;

P Q[MAX]; // データを格納するための配列
int head; // キューの先頭を指し示す
int tail; // キューの末尾＋ 1 の場所（最後の要素の隣）を指し示す変数
int n;

void initialize();
int isEmpty();
int isFull();
void enqueue(P x);
P dequeue();

int main(){
  int i;
  int q; // 各プロセスの最大処理時間
  int time=0; // かかった処理時間を格納
  P u;
  initialize();
  
  scanf("%d %d", &n, &q);
  for (i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n + 1;
  while(head != tail){
    u = dequeue();
    if(u.t > q){ // プロセスの処理時間がqより長いとき
      time += q;
      u.t -= q;
      enqueue(u);
    }
    else{ // プロセスの処理時間がqより短いとき
      time += u.t;
      printf("%s %d\n", u.name, time);
    }
    
  }
  return 0;
}

// キューを空にする
void initialize(){
  head = 0;
  tail = 0;
}

// キューが空かどうかを調べる
int isEmpty(){
  if(tail == head)return 1;
  else return 0;
}

// キューが満杯かどうかを調べる
int isFull(){
  if(head == (tail + 1) % MAX)return 1;
  else return 0;
}

// キューの末尾に要素xを追加する
void enqueue(P x){
  if(isFull() == 1)exit(8);
  Q[tail] = x;
  if(tail + 1 == MAX)tail = 0;
  else tail++;

}

// キューの先頭から要素を取り出す
P dequeue(){
  P x;
  if(isEmpty() == 1)exit(8);
  x = Q[head];
  if(head + 1 == MAX)head = 0;
  else head++;
  return x;
}

