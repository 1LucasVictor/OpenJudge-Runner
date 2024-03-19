#include <stdio.h>
#include <string.h>

struct process{
  char name[11];
  int time;
  int end;
};

int main(void){

  int n, q, i, j, co = 0, co_zero = 0, co_time = 0, co_end = 0, ans_time[100001];
  struct process pro[100001], k;

  scanf("%d %d", &n, &q);
  for(i = 0; i < n; i++){
    scanf("%s %d", pro[i].name, &pro[i].time);
    co++;
  }

  while(co != co_zero){
    if(pro[0].time != 0){
      if(pro[0].time > q){
	co_time += q;
	ans_time[0] = co_time;
	pro[0].time -= q;
      } else {
	co_time += pro[0].time;
	ans_time[0] = co_time;
	pro[0].time = 0;
	pro[0].end = co_end;
	co_end++;
	co_zero++;
      }
    }
    k = pro[0];
    j = ans_time[0];
    for(i = 0; i < co-1; i++){
      pro[i] = pro[i+1];
      ans_time[i] = ans_time[i+1];
    }
    pro[co-1] = k;
    ans_time[co-1] = j;
  }
  for(i = 0; i < co; i++){
    for(j = 0; j < co; j++){
      if(pro[j].end == i){
	printf("%s %d\n", pro[j].name, ans_time[j]);
      }
    }
  }	
  return 0;
}