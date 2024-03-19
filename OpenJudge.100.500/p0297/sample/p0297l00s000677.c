#include <stdio.h>
#include <string.h>

void Push(int, int);

#define LEN 10
#define MAX 100000
int main() {
  int n,q;
  int i;
  int q_time=0;
  char name[MAX][LEN] = {};
  int time[MAX] = {};
  char subname[MAX][LEN] = {};
  int subtime[MAX] = {};
  int sum_time=1;

  scanf("%d %d",&n,&q);

  /*入力*/
  for(i=0;i<n;i++) {
    scanf("%s",name[i]);
    scanf("%d",&time[i]);
  }

  while(sum_time != 0) { //時間の合計が０=全タスク完了
    sum_time = 0;
    /*時間の計算*/
    for(i=0;i<n;i++) {
      if(strcmp(name[i],subname[i]) == 0) {
	continue;
      } else {
	if((time[i] - q) <= 0) {
	  q_time += time[i];
	  time[i] = 0;
	  strcpy(subname[i],name[i]);
	  subtime[i] = time[i];
	  printf("%s %d\n",name[i],q_time);
	} else {
	  q_time += q;
	  time[i] -= q;
	}
	sum_time += time[i]; 
      }
    }
  }
  return 0;
}

