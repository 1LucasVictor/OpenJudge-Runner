#include <stdio.h>
#include <string.h>
#define N 100000

int main(){
  int n, q, time[N], head = 0, tail = 0, t_sum = 0, i;
  char name[11][N];
  
  scanf("%d%d" ,&n ,&q);
  for(i = 0; i < n; i++){
    scanf("%s%d", name[i], &time[i]);
    tail += 1;
  }
  
  if(tail == 1){
    printf("%s %d\n", name[head], time[head]);
    return 0;
  }

  while(head != tail){
    if(time[head] > q){
      t_sum += q;
      time[head] -= q;
      strcpy(name[tail], name[head]);
      time[tail] = time[head];
      tail += 1;
      if(tail >= N) tail = 0;
    }
    else{
      t_sum += time[head];
      printf("%s %d\n", name[head], t_sum);
    }
    head += 1;
    if(head >= N) head = 0;
  }
  return 0;
}