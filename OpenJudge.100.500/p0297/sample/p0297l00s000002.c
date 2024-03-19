#include<stdio.h>
#include<string.h>
typedef struct {
  char name[10];
  int time;
}QUE;

int main(){
  int i,sum=0,shori,N,Q,head=0,tail;
  QUE task[100000];
  scanf("%d%d",&N,&Q);
  tail = N-1;
  shori = N;
  for(i=0;i<N;i++){
    scanf("%s",task[i].name);
    scanf("%d",&task[i].time);
  }
  while(shori>0){
    if(task[head].time>Q){
      tail++;
      task[tail].time=task[head].time-Q;
      strcpy(task[tail].name,task[head].name);
      sum+=Q;
      head++;

    }
    else {
      sum+=task[head].time;
      printf("%s %d\n",task[head].name,sum);
      head++;
      shori--;
    }}
  return 0;
}