#include<stdio.h>
#define MAX 100000

typedef struct{
    char name[100];
    int time;
} queue;
 
void enqueue(queue );
queue dequeue(void);
 
int head=0,end=0;
   queue Q[MAX];
 
    int main(void){
      int num,i,quantum,sum=0,f;
    queue q;
 
        scanf("%d%d",&num,&quantum);
        for(i=0;i<num;i++){
            scanf("%s%d",q.name,&q.time);
            enqueue(q);
        }
	f=1;
        while(f){
	  if(head == end){
	  break;
	  }
            if(Q[head].time > quantum){
                q = dequeue();
                q.time =q.time- quantum;
                enqueue(q);
                sum =sum+ quantum;
            }

            else{
                q = dequeue();
                printf("%s %d\n",q.name,(q.time+sum));
                sum =sum+ q.time;
            }
        }
return 0;
}

queue dequeue(){
    queue N;
    N = Q[head];
 
    if(head+1 == MAX){
      head = 0;
    }
    else head++;
    return N;
}
void enqueue(queue q){
Q[end] = q;
 if(end+1 == MAX){
   
  end = 0;
 }
else end++;
}