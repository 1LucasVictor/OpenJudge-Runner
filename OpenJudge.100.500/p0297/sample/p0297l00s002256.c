#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define N 100000
 
typedef struct{
  char name[10];
  int time;
}process;
 
void enq(process);
process deq(void);
 
int head=0, tail=0, max;
process Process[N];
 
int main(){
  int i, n, q, sum=0;
  process p;
 
  scanf("%d%d", &n, &q);
   
  if( n<1 || 100000<n ) exit(1);
  if( q<1 || 1000 < q ) exit(2);
        
  for( i=0 ; i<n ; i++ ){
    scanf("%s%d", p.name, &p.time);
     
    if( strlen(p.name)<1 || 10<strlen(p.name) ) exit(3);
    if( p.time<1 || 50000<p.time ) exit(4);
    enq(p);
  }
 
  while(1){
    if(head == tail) break;
    if(Process[head].time > q){
      p = deq();
      p.time -=q;
      enq(p);
      sum += q;
    }
    else{
      p = deq();
      printf("%s %d\n", p.name, p.time + sum);
      sum += p.time;
    }
  }
 
  return 0;
}
 
void enq(process p){
  Process[tail] = p;
  if(tail+1 == N){
    tail = 0;
  }
  else tail++;
}
 
process deq(){
  process  x;
 
  x = Process[head];
  if(head+1 == N){
    head = 0;
  }
  else head++;
  return x;
}