#include <stdio.h>
#define N 100000

typedef struct{
  int time;
  char name[10];
}Process;

int q;

int main(){
  Process P[N];
  int num, i, total = 0;
  int head = 0, tail;

  scanf("%d%d", &num, &q);
  
  for(i = 0; i < num; i++){
    scanf("%s %d", P[i].name, &P[i].time);
  }
  tail = i+1;
    
  while(head != tail-1){
    if(P[head].time - q <= 0){
      total += P[head].time;
      printf("%s %d\n", P[head].name, total);
      head = (head+1) % (num+1);
    }
    else{
      total += q;
      P[head].time -= q;
      P[tail-1] = P[head];
      head = (head+1) % (num+1);
      tail = (tail+1) % (num+1);
    }
  }
  
  return 0;
}

