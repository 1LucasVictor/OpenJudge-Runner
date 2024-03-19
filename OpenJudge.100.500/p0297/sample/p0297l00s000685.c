#include<stdio.h>
#include<string.h>
#define N 100000
 
typedef struct pp{
  char name[100];
  int t;
}P;
 
int head, tail, n, c=0, q;
P Q[N];
void enqueue(){
  Q[head].t = Q[head].t -q;
  Q[tail] = Q[head];
  if(tail > n+1) tail = 0;
  else tail++;
}
 
void dequeue(){
  printf("%s %d\n",Q[head].name, Q[head].t+c);
}
 
int main(){
  int i;
   
  scanf("%d %d", &n, &q);
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1;
  tail = n+1;
  i = 1;
  while(head != tail){
    if(Q[head].t > q){
    enqueue();
    c = c + q;
    }
    else{
      dequeue();
      c = c + Q[head].t;
    }
  if(head > n+1) head = 0;
  else head++;
  }
  return 0;
}