#include <stdio.h>
#include <string.h>

#define N 300000

typedef struct{
  char name[11];
   int time;
}Data;

void enqueue(Data);
Data dequeue(void);

int head;
int tail;
Data Q[N];

int main(){

   int i;
   int n;
   int q;
   int sum_time=0;
  Data data[N];
  Data tmp;

  scanf("%d%d",&n,&q);

  for(i=0;i<n;i++){
    scanf("%s %d",data[i].name,&data[i].time);
    enqueue(data[i]);
  }

  i=0;
  
  while(i!=n){
    tmp = dequeue();
    if(tmp.time - q <= 0){
    sum_time += tmp.time;
    tmp.time = sum_time;
    data[i]=tmp;
    i++;
    }
    else{
    sum_time += q;
    tmp.time = tmp.time - q;
    enqueue(tmp);
    }
  }

  for(i=0;i<n;i++){
  printf("%s %d\n",data[i].name,data[i].time);
  }
  
  return 0;
}


 void enqueue(Data x){

   Q[tail]=x;
   tail++;
}
 
 Data dequeue(void){

   Data x;

   x=Q[head];
   head++;

   return x;
 }