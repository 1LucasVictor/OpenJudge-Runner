#include<stdio.h>
#include<string.h>
#define length 10000
typedef struct{
  char name[10];
  int time;
}Q;
Q q[10000],im;
int head,tail,num,t,totaltime;

void enqueue(Q x){
  q[tail]=x;
  tail=(tail+1)%length;
}
Q dequeue(){
  Q tmp;
  tmp=q[head];
  head=(head+1)%length;
  return tmp;
}

int main(){
  int i;
  //入力
  scanf("%d%d",&num,&t);
  for(i=1;i<=num;i++)
    scanf("%s%d",&q[i].name,&q[i].time);

  /* for(i=1;i<=num;i++)printf("enq %s %d\n",q[i].name,q[i].time); */
  head=1;
  tail=num+1;
  //ループ
  while(num!=0){
  /* for(i=0;i<20;i++){ */
    im=dequeue();
     /* printf("deq %s %d\n",im.name,im.time); */
    if(im.time>t){
      im.time=im.time-t;//-
      totaltime+=t;//total
      /* printf("enq %s %d\n",im.name,im.time); */
      enqueue(im);
    }
    else if(im.time>0){
      totaltime+=im.time;//total
      im.time=0;//-
      num--;//num-
      printf("%s %d\n",im.name,totaltime);
    }
  }
  return 0;
}

