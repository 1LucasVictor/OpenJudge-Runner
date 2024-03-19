#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P x);
P dequeue(void);

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  int time=0;
  scanf("%d %d", &n, &q);
  
  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  
  head = 1;
  tail = i;
  
  for(i = 1; i <= LEN; i++){
    if(tail == head) break;
    
    time = Q[i].t - q;
    
    if(time  > 0){
    
      Q[i].t = time;
      elaps = elaps + q;
      u = dequeue();
      enqueue(u);
    }
    else if(time <= 0){
      
      elaps = elaps + Q[i].t;
    u = dequeue();
    printf("%s %d\n",u.name,elaps);
    }
  }
  return 0;
}
void enqueue(P x){
  Q[tail] = x;
  if(tail+1==LEN){
    tail=0;
  }else{
    tail++;
   }
}    

P dequeue(){
  P x=Q[head];
  if(head+1==LEN){
    head=0;
  }
  else{
    head++;
    return x;
  }
}