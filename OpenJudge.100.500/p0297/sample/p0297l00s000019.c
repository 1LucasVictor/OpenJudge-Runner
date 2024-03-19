#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

typedef struct{
  char name[20];
  int time;
} data;

void enque(void);
void deque(void);

int head = 1, tail, total = 0;
data list[MAX];

int main(){
  int n, q, i;
	
  scanf("%d%d", &n, &q);
  tail = n+1;
  for(i=1; i<=n; i++) scanf("%s%d", list[i].name, &list[i].time);

  while(1){
    if(head == tail) break;
    if(list[head].time > q){
      total += q;
      list[head].time -= q;
      enque();
      deque();
    }
    else{
      total += list[head].time;
      printf("%s %d\n", list[head].name, total);
      deque();
    }
  }
	
  return 0;
}

void enque(void){
  list[tail] = list[head];
  if((tail+1) == MAX) tail = 0;
  else tail++;
}

void deque(void){
  if((head+1) == MAX) head = 0;
  else head++;
}