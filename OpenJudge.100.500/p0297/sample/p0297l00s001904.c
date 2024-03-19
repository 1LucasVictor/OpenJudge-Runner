#include <stdio.h>

#define N 100000
#define L 10
#define T 50000

int main(){
  int i, num, speed;
  int head=0, flag=0, count=0, rank=0, time=0;
  int ctime[T], order[N];
  int ptime[N];
  char pname[N][L];

  scanf("%d%d", &num, &speed);
  for(i=0;i<num;i++){
    if(scanf("%s%d", pname[i], &ptime[i])==EOF) break;
    ctime[i]=ptime[i];
    }

  while(!flag){
    if(ctime[head]>0) {
      time+=speed;
      count=0;
      ctime[head]-=speed;
      if(ctime[head]<=0){
	time+=ctime[head];
	order[rank]=head;
	ptime[order[rank]]=time;
	rank++;
      }
    }
    else count++;

    if(count==num) flag=1;
    
    head = (head+1) % num;
  }

  for(i=0;i<num;i++){
    printf("%s %d\n", pname[order[i]], ptime[order[i]]);
  }

  return 0;
}