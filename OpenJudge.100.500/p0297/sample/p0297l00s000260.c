#include<stdio.h>
#include<string.h>

int main(){
  char name[100000][10];
  int time[100000];
  int data,max_time,head=0,tail,total=0,rm=0,i;
  scanf("%d %d",&data,&max_time);
  for(tail=0;tail<data;tail++)scanf("%s %d",name[tail],&time[tail]);
  tail=0;
  head=0;
  while(1){
    if(time[head] > max_time){
      total +=max_time;
      time[tail] = time[head] -max_time;
      if(head != tail)strcpy(name[tail],name[head]);
      head++;
      tail++;
      if(head == data){
        head = tail = 0;
        data -= rm;
        rm = 0;
      }
    }
    else{
      total += time[head];
      printf("%s %d\n",name[head],total);
      head++;
      rm++;
      if(head == data){
        head = tail = 0;
        data -= rm;
        rm = 0;
      }
    }
    if(data == 0)break;
  }
  return 0;
}

