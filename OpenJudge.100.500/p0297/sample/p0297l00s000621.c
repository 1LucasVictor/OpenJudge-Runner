#include <stdio.h>
#include <stdlib.h>
#define N 100000
#define Q 1000

typedef struct{
  char name[10];
  int time;
} D;

int main(){
  int n, t, i;
  int cnt = 0, head = 0, ta;
  D data[N];

  scanf("%d%d", &n, &t);
  ta = n;

  for(i = 0; i < n; i++){
    scanf("%s%d", data[i].name, &data[i].time);
  }

  while(head != ta){
    if(data[head].time > t){
      data[head].time -= t;
      data[ta] = data[head];
      ta++;
      cnt += t;
    }
    else{
      cnt += data[head].time;
      printf("%s %d\n", data[head].name, cnt);
    }
    head++;
    if(head >= N) head = 0;
    if(ta >= N) ta = 0;
  }

  return 0;
}

