#include <stdio.h>
#include <stdlib.h>
#define N 100000
#define Q 1000

typedef struct{
  char name[10];
  int time;
} Data;

int main(){
  int n, t, i, count = 0, head = 0, tail;
  Data data[N];

  scanf("%d%d", &n, &t);
  tail = n;

  for(i = 0; i < n; i++){
    scanf("%s%d", data[i].name, &data[i].time);
  } 

  while(head != tail){
    if(data[head].time > t){
      data[head].time -= t;
      data[tail] = data[head];
      tail++;
      count += t;
    }
    else{
      count += data[head].time;
      printf("%s %d\n", data[head].name, count);
    }
    head++;
    if(head >= N) head = 0;
    if(tail >= N) tail = 0;
  }

  return 0;
}