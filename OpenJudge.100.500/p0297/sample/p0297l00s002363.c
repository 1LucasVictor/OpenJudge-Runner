#include<stdio.h>
#define N 1000

typedef struct{
  char name[10];
  int time;
}Data;

int main(){
  int n, q, i, count=0, head=0, tail;

  Data Q[N];

  scanf("%d%d", &n, &q);

  tail = n;

  for(i = 0; i < n; i++)
    scanf("%s%d", Q[i].name, &Q[i].time);

  while(head != tail){
    if(Q[head].time > q){
      Q[head].time -= q;
      Q[tail] = Q[head];
      tail++;
      count += q;
    }
    else{
      count += Q[head].time;
      printf("%s %d\n", Q[head].name, count);
    }

    head++;
    if(head >= N)
      head = 0;
    if(tail >= N)
      tail = 0;
  }
  return 0;
}