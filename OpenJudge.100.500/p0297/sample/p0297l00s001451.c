#include <stdio.h>
#include <string.h>
#define LEN 100005

typedef struct pp{
  char name[10];
  int t;
}P;


int main(){
  P Q[LEN+1];
  int num,time,sum=0;
  int i,head=1,tail;

  scanf("%d%d",&num,&time);
  for(i=1; i<=num; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }
  
  tail = num + 1;

  while(head < tail){
    if(time < Q[head].t){
      sum+=time;
      strcpy(Q[tail].name,Q[head].name);
      Q[tail].t =Q[head].t -  time;
      head++;
      tail++;
    }
    else if(time >= Q[head].t){
      sum+=Q[head].t;
      printf("%s %d\n",Q[head].name,sum);
      head++;
    }
  }

  return 0;
}