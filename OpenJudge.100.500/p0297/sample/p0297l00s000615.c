#include <stdio.h>
#define N 100000

typedef struct{
  int time;
  char name[10];
}Process;

int q;

int main(){
  Process P[N], p;
  int num, i, total = 0;
  int head = 0, tail;
  
  scanf("%d%d", &num, &q);
  
  for(i = 0; i < num; i++){
    scanf("%s %d", P[i].name, &P[i].time);
  }
  tail = i;
  
  while(head != tail){
    
    p = P[head];
    head++;
    if(head == num+1){
      head = 0;
    }
    
    if(p.time - q <= 0){
      total += p.time;
      printf("%s %d\n", p.name, total);
    }
    else{
      total += q;
      p.time -= q;

      P[tail] = p;
      tail++;
      if(tail == num+1){
	tail = 0;
      }
    }
  }
  
  return 0;
}


