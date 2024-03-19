#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 100005


//?§???????
typedef struct pp{
  char name[100];
  int time;
}Process;


//?????°??£?¨?
Process process[LEN+1];
int head=0,tail=0,num;


//??¢??°??£?¨?
void enqueue(Process);
Process dequeue(void);


int main(){
  int time=0;
  int i,quantum,count=0;
  Process k;
  k.time = 0;


  //??\???
  scanf("%d %d",&num,&quantum);
  for(i = 0; i < num; i++){
      scanf("%s",process[i].name);
      scanf("%d",&process[i].time);
    }
  head = 0;
  tail = num;

  while(head != tail){
    k = dequeue();

    if(k.time > quantum){
      time += quantum;
      k.time -= quantum;
      enqueue(k);
    }
    else{
      time += k.time;
      printf("%s %d\n",k.name,time);
      count++;
    }
  }

  return 0;
}


  //??¢??°
void enqueue(Process x){
  process[tail] = x;
  if( tail+1 == LEN){
    tail = 0;
  }
  else{
    tail++;
  }
}
Process dequeue(void){
  Process x;
  x = process[head];
  if( head+1 == LEN){
    head = 0;
  }
  else{
    head++;
  }
  return x;
}