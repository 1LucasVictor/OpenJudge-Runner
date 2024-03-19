#include<stdio.h>
#include<string.h>
 
typedef struct {
  char name[100];
  int t;
}Queue;
 
Queue Q[100000];
int n, head = 0, tail = 0;
 
void enqueue(Queue x){
 
  if(tail == n){
    tail = 1;
  } else {
    tail++;
  }
 
  Q[tail] = x;
}
 
Queue dequeue(){
  if(head == n){
    head = 1;
  } 
  else {
    head++;
  }
  return Q[head];
}

int main(){
  int i, q, cnt = 0, time = 0;
  Queue cell;
  
  scanf("%d %d",&n,&q);
  
  for (i = 1; i <= n; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }
  
  while(cnt != n){
    cell = dequeue();
    if(cell.t - q <= 0){
      time += cell.t;
      cell.t = 0; 
      cnt++;
     
      printf("%s %d",cell.name ,time);
      printf("\n");    
  
    } else if (cell.t > 0){
      time += q;     
      cell.t -= q;
      enqueue(cell);
    }
    
  }
 
 return 0;

}