#include<stdio.h>
#include<stdlib.h>

#define QUESIZE 1001

typedef struct{
	char name[10];
	int time;
} process;

void que_enqueue(process);
process que_dequeue(void);
int que_size(void);
int que_free(void);
int que_empty(void);
void que_clear(void);

process que[QUESIZE];
int head=0, tail=0;

void que_enqueue(process n)
{
  tail=(tail+1)%QUESIZE;
  que[tail]=n;
}

process que_dequeue(void)
{
  head=(head+1)%QUESIZE;
  return que[head];
}

int que_size(void)
{
  if(head < tail) return tail-head;
  else return tail-head+QUESIZE;
}

int que_free(void)
{
  return QUESIZE-1-que_size();
}

int que_empty(void)
{
  return head==tail;
}

void que_clear(void)
{
  head = tail = 0;
}

int main(void){
	int n,q;
	int i;
	int Mom=0;
	process q_in,q_out;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++){
		scanf("%s %d",q_in.name,&q_in.time);
		que_enqueue(q_in);
	}
	while(1){
		if(que_empty()) break;
		
		q_out=que_dequeue();
		if(q_out.time <= q){
			Mom += q_out.time;
			printf("%s %d\n",q_out.name,Mom);
		}
		else{
			Mom += q;
			q_out.time -= q;
			que_enqueue(q_out);
		}
	}
	return 0;
}