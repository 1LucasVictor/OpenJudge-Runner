#include<stdio.h>
#include<stdlib.h>

typedef struct{
  char name[10];
  int time;
} data;

void A(data *);
int main(){
  int n,q,i,head,tail,j=0,all=0,timel[100000];
  data queue[200000],output[100000];
  scanf("%d%d",&n,&q);
  for(i=0;i<n;i++){
    scanf("%s %d",queue[i].name,&queue[i].time);
  }

  head=0;
  tail=n-1;
  while(head!=tail){
      queue[head].time-=q;
      if(queue[head].time<=0){
        output[j]=queue[head];
        all=all+q+queue[head].time;
        timel[j]=all;
        j++;
      }
      else {
        tail++;
        queue[tail]=queue[head];
        all+=q;
      }
      head++;
    }
    output[j]=queue[head];
    all=all+queue[head].time;
    timel[j]=all;

    for(i=0;i<=j;i++){
      printf("%s %d\n",output[i].name,timel[i]);
    }
  }

