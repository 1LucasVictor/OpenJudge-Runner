#include<stdio.h>
#include<string.h>
#define N 100000
 
typedef struct pp{
  char name[100];
  int time;
}Process;

 
int head, tail, n, c=0, q;
Process Q[N];


void enqueue(){
  Q[head].time = Q[head].time -q;
  Q[tail] = Q[head];
  if(tail > n+1) tail = 0;
  else tail++;
}
 
void dequeue(){
  printf("%s %d\n",Q[head].name, Q[head].time+c);
}
 
int main(){
  int i;
   
  scanf("%d %d", &n, &q);
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }
  head = 1;
  tail = n+1;
  i = 1;
  while(head != tail){
    if(Q[head].time > q){
    enqueue();
    c = c + q;
    }
    else{
      dequeue();
      c = c + Q[head].time;
    }
  if(head > n+1) head = 0;
  else head++;
  }
  return 0;
}