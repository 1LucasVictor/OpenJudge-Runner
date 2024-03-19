#include<stdio.h>
#include<string.h>

typedef struct {
  char name[100];
  int t;
}Process;

Process Q[1001];
int n, head = 0, tail = 0;

void enqueue(Process x){

  if(tail == n){
    tail = 1;
  } else {
    tail += 1;
  }

 Q[tail] = x;
}

Process dequeue(){
  if(head == n){
    head = 1;
  } else {
    head++;
  }
  return Q[head];
}

int main(){
  int i, q, count = 0, time = 0;
  Process cell;

  scanf("%d %d", &n, &q);

 for (i = 1; i <= n; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }

  while(count != n){
    cell = dequeue();
    if(cell.t - q <= 0){
      time += cell.t;
      cell.t = 0; 
      count++;
      printf("%s %d\n",cell.name ,time);
    } else if (cell.t > 0){
      time += q;     
      cell.t -= q;
      enqueue(cell);
    }
    
  }
  return 0;
  }