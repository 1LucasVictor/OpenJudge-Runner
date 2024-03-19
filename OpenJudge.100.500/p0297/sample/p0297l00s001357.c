#include <stdio.h>
#define LEN 100005
#define true 1
#define false 0
typedef struct {
  char name[100];
  int t;
} P;
P Q[LEN+1];
int head, tail, n;
void initialize(void);
int isEmpty(void);
int isFull(void);
void enqueue(P);
P dequeue(void);

int main()
{
  int time, q, i, now_time = 0;
  /*timeはクオンタムをカウントし、now_time
はプロセスを行なっている現在の時刻をカウント
する。*/
  P Q2;

  scanf("%d%d",&n,&q);
  for(i = 0 ; i < n ; i++){
    scanf("%s%d",Q[i].name,&Q[i].t);
    enqueue(Q[i]); }

  while(n > 0){ 
    Q2 = dequeue();
    time = q;
    while(Q2.t > 0 && time > 0){ 
      now_time++;
      Q2.t--;
      time--; }
    if(Q2.t > 0) enqueue(Q2);
    else{
      printf("%s %d\n",Q2.name,now_time);
      n--; }
  }
      
  return 0;
}

void  initialize(void)
{
  head = tail = 0;
}

int isEmpty(void)
{
  if(head == tail) return true;
  else return false;
}

int isFull(void)
{
  if(head == (tail + 1) % (LEN + 1)) return true;
  else return false;
}

void enqueue(P x)
{
  if(isFull() == true) printf("オーバーフロー\n");

  Q[tail] = x;

  if(tail + 1 == LEN + 1) tail = 0;
  else tail++;
}

P dequeue(void)
{
  P x;
  
  if(isEmpty() == true) printf("エラー（アンダーフロー）\n"); 

  x = Q[head];

  if(head + 1 == LEN + 1) head = 0;
  else head++;

  return x;
}
