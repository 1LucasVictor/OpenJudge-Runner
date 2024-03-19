#include <stdio.h>
#define MAX 100001

typedef struct{
  char name[10];
  int time;
} qu;

int head,tail;

int main(){
  int i,n,x,mt,sum = 0;
  qu q[MAX];

  scanf("%d%d",&n,&mt);
  for(i = 1;i <= n;i++){
    scanf("%s%d",q[i].name,&q[i].time);
  }
  head = 1;
  tail = n+1;

  while(1){
    if(head == tail) break;
      if(q[head].time <= mt){
	sum += q[head].time;
	printf("%s %d\n",q[head].name,sum);
	head++;
	if(head == MAX) head = 0;
      }
      else{
	sum += mt;
	q[head].time -= mt;
	q[tail] = q[head];
	head++;
	tail++;
	if(tail == MAX) tail = 0;
	if(head == MAX) head = 0;
	}
  }

  return 0;
}

