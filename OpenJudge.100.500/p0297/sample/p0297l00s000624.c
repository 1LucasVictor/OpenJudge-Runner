#include <stdio.h>
#include <string.h>
#define LENGTH 200000

typedef struct A{
  char name[100];
  int time;
}B;

int head, tail, n;
B Q[LENGTH+1];

void enqueue(B);
B dequeue ();
int minimum_judge(int,int);

int main(){
  int elapsedtime = 0,number,i,q;
  B data;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].time);
  }
  tail = n + 1;
  head = 1;
  
  while(head != tail){
    data = dequeue();
    number = minimum_judge(q,data.time);
    data.time -= number;
    elapsedtime += number;
    
    if(data.time > 0){
      enqueue(data);
    }
    else{
      printf("%s %d\n",data.name,elapsedtime);
    }
  }
  
  return 0;
}

void enqueue(B x){
  Q[tail] = x;
  tail++;
}

B dequeue(){
  B x = Q[head];
  head++;
  
  return x;
}

int minimum_judge(int q,int time){
  if(q > time)return time;
  else return q;
}

