#include <stdio.h>
#define MAX 50000

typedef struct data{
  char name[11];
  int time;
} math;

int num,q,t,i,tmp,time;
math que[MAX];

void input(void){
  scanf("%d%d",&num,&q);
  for(i=0;i<num;i++){
    scanf("%s%d",que[i].name,&que[i].time);
  } 
}
    
void calc(void){
    for(i=0,tmp=0,time=0;tmp<num;i=(i+1)%num) {
    if(que[i].time<=0) continue;
    t=q<que[i].time ? q : que[i].time;
    que[i].time -=t;
    time +=t;
    if(que[i].time <= 0) {
      printf("%s %d\n", que[i].name, time);
      tmp++;
    }
  }
}



int main() {
  input();
  calc();
  return 0;
}
